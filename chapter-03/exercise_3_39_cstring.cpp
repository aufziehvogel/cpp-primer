#include <cstring>
#include <cstddef>
#include <string>
#include <iostream>

const size_t STR_SIZE = 10;

int main()
{
    char str1[STR_SIZE], str2[STR_SIZE];

    std::cin.getline(str1, STR_SIZE);
    std::cin.getline(str2, STR_SIZE);

    bool equal = true;

    if (strlen(str1) == strlen(str2)) {
        for (size_t i = 0; i < strlen(str1); ++i) {
            if (str1[i] != str2[i]) {
                equal = false;
            }
        }
    } else {
        equal = false;
    }

    if (!equal) {
        std::cerr << "Strings are not equal" << std::endl;
        return 1;
    } else {
        std::cout << "Strings are equal" << std::endl;
        return 0;
    }
}
