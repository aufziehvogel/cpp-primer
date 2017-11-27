#include <iostream>

int main()
{
    int input;

    while (std::cin >> input && input != 42)
    ; // do nothing

    if (input == 42) {
        std::cout << "Finally your input is " << input << std::endl;
    } else {
        std::cerr << "Your input was not a valid number" << std::endl;
    }

    return 0;
}
