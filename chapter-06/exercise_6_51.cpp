#include <iostream>

void f()
{
    std::cout << "called f()" << std::endl;
}

void f(int)
{
    std::cout << "called f(int)" << std::endl;
}

void f(int, int)
{
    std::cout << "called f(int, int)" << std::endl;
}

void f(double, double = 3.14)
{
    std::cout << "called f(double, double = 3.14)" << std::endl;
}

int main()
{
    f(42);
    f(42, 0);
    f(2.56, 3.14);
}
