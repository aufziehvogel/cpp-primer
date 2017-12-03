#include <iostream>

int fact(unsigned int n)
{
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main()
{
    for (int i = 0; i < 10; ++i) {
        std::cout << i << "! = " << fact(i) << "\n";
    }
    std::cout << std::flush;

    return 0;
}
