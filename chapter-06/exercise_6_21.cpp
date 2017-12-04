#include <iostream>

int max(int a, const int *b)
{
    if (a > *b) {
        return a;
    } else {
        return *b;
    }
}

int main()
{
    int a, b;
    std::cin >> a >> b;

    std::cout << "max: " << max(a, &b) << std::endl;

    return 0;
}
