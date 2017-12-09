#include "screen.h"
#include <iostream>

int main()
{
    Window_mgr wm = Window_mgr();
    Screen s = wm.get(0);

    s.move(10, 5).set('A');

    s.display(std::cout);
}
