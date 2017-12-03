#include <iostream>
#include <stdexcept>

int main()
{
    int a, b;

    std::cin >> a >> b;

    // Tutorial asked to not catch the exception and see what happens
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    } else {
        std::cout << (a / b) << std::endl;
    }

    return 0;
}
