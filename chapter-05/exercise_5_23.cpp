#include <iostream>

int main()
{
    int a, b;

    std::cin >> a >> b;

    if (b == 0) {
        std::cerr << "Cannot divide by zero" << std::endl;
    } else {
        std::cout << (a / b) << std::endl;
    }

    return 0;
}
