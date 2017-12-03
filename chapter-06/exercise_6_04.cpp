#include <iostream>

int fact(unsigned int n)
{
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int user_factorial()
{
    unsigned int n;

    std::cout << "Please enter a non-negative number" << std::endl;
    std::cin >> n;

    return fact(n);
}

int main()
{
    int factorial = user_factorial();
    std::cout << factorial << std::endl;

    return 0;
}
