#include <iostream>

void reset(int &ctr)
{
    ctr = 0;
}

int main()
{
    int value = 123;

    std::cout << "Before reset: " << value << "\n";
    reset(value);
    std::cout << "After reset: " << value << "\n";
    std::cout << std::flush;

    return 0;
}
