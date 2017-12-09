#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <vector>

class Screen;

class Window_mgr
{
    using ScreenIdx = std::vector<Screen>::size_type;

public:
    Window_mgr();
    Screen get(ScreenIdx idx) const;
    void clear(ScreenIdx);

private:
    std::vector<Screen> screens;
};

class Screen
{
    friend void Window_mgr::clear(ScreenIdx);

public:
    using pos = std::string::size_type;

    Screen() = default;

    Screen(pos rows, pos cols)
        : windowRows(rows), windowCols(cols), contents(rows * cols, ' ') { }

    Screen(pos rows, pos cols, char blank)
        : windowRows(rows), windowCols(cols), contents(rows * cols, blank) { }

    inline char get() const
    {
        return contents[cursor];
    }

    char get(pos row, pos col) const;

    Screen& set(char c)
    {
        contents[cursor] = c;
        return *this;
    }

    Screen& set(pos row, pos col, char c);

    Screen& move(pos row, pos col);

    const Screen& display(std::ostream &out) const
    {
        do_display(out);
        return *this;
    }

    Screen& display(std::ostream &out)
    {
        do_display(out);
        return *this;
    }

private:
    pos windowRows, windowCols;
    pos cursor;
    std::string contents;

    Screen& do_display(std::ostream &out) const
    {
        for (pos r = 0; r < windowRows; ++r) {
            for (pos c = 0; c < windowCols; ++c) {
                out << contents[r * windowCols + c];
            }
            out << "\n";
        }
    }
};

#endif
