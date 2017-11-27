#include <iostream>

int main()
{
    int a, b, c, d;

    std::cout << "Type four numbers (a b c d)" << std::endl;
    std::cin >> a >> b >> c >> d;

    if (a > b && b > c && c > d) {
        std::cout << "Hooray, a > b > c > d" << std::endl;
    } else {
        std::cerr << "a > b > c > d is not true" << std::endl;
    }

    return 0;
}
