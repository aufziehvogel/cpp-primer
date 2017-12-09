#include "screen.h"
#include <stdexcept>

Window_mgr::Window_mgr()
{
    screens = {Screen(24, 80, ' ')};
}

Screen Window_mgr::get(ScreenIdx idx) const
{
    if (screens.size() <= idx)
        throw std::runtime_error("Trying to access invalid screen, actual size: " + screens.size());

    return screens[idx];
}

void Window_mgr::clear(ScreenIdx idx)
{
    if (screens.size() <= idx)
        throw std::runtime_error("Trying to access invalid screen, actual size: " + screens.size());

    Screen screen = screens[idx];
    screen.contents = std::string(screen.windowRows * screen.windowCols, ' ');
}

char Screen::get(pos row, pos col) const
{
    Screen::pos cursorPos = row * windowCols + col;
    return contents[cursorPos];
}

Screen& Screen::set(pos row, pos col, char c)
{
    Screen::pos cursorPos = row * windowCols + col;
    contents[cursorPos] = c;
    return *this;
}

Screen& Screen::move(pos row, pos col)
{
    cursor = row * windowCols + col;
    return *this;
}
