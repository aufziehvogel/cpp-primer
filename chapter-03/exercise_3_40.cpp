#include <cstring>
#include <cstddef>
#include <iostream>

int main()
{
    const size_t bufsize = 100;

    const char str1[] = "String number one";
    const char str2[] = "String number two";
    char both[bufsize] = {};

    if (strlen(str1) + strlen(str2) + 1 > bufsize) {
        std::cerr << "Strings too large for buffer" << std::endl;
        return 1;
    }

    strcpy(both, str1);
    strcat(both, str2);

    std::cout << both << std::endl;

    return 0;
}
