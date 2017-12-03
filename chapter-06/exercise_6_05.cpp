#include <iostream>

unsigned int absolute(int value)
{
    if (value < 0) {
        return -value;
    } else {
        return value;
    }
}

int main()
{
    std::cout << "absolute(-5): " << absolute(-5) << std::endl;
    std::cout << "absolute(5): " << absolute(5) << std::endl;
    std::cout << "absolute(0): " << absolute(0) << std::endl;

    return 0;
}
