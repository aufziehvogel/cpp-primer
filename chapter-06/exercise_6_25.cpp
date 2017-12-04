#include <string>
#include <iostream>

int main(int argc, char *argv[])
{
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " str1 str2" << std::endl;
        return 1;
    }

    std::string concatenation = std::string(argv[1]) + argv[2];
    std::cout << "Concatenation: " << concatenation << std::endl;

    return 0;
}
