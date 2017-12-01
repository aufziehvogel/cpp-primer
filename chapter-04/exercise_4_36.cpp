#include <iostream>

int main()
{
    int i = -10;
    double d = 3.14;

    i *= d;
    std::cout << "Without cast to int: " << i << std::endl;
    
    i = -10;
    i *= static_cast<int>(d);
    std::cout << "With cast to int: " << i << std::endl;

    return 0;
}
