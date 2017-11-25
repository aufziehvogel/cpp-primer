#include <string>
#include <iostream>

int main()
{
    std::string str1, str2;

    std::cin >> str1 >> str2;

    if (str1 == str2) {
        std::cout << "Strings are equal" << std::endl;
        return 0;
    } else {
        std::cerr << "Strings are not equal" << std::endl;
        return 1;
    }
}
