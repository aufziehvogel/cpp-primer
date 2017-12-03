#include <iostream>
#include <stdexcept>

int divide(int dividend, int divisor)
{
    if (divisor == 0) {
        throw std::runtime_error("Division by zero");
    } else {
        return dividend / divisor;
    }
}

int main()
{
    int a, b;

    std::cin >> a >> b;

    try {
        std::cout << divide(a, b) << std::endl;
    } catch (std::runtime_error err) {
        std::cerr << err.what() << std::endl;
    }

    return 0;
}
