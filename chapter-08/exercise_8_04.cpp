#include <fstream>
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " file" << std::endl;
        return 1;
    }

    std::string buffer;
    std::vector<std::string> lines;

    std::ifstream infile(argv[1]);

    if (!infile) {
        std::cerr << "Error while trying to open file '" << argv[1] << "\n";
        return 1;
    }

    while (std::getline(infile, buffer)) {
        lines.push_back(buffer);
    }

    for (std::string line : lines) {
        std::cout << line << "\n";
    }

    // buffer will flush on successful exit of program, no need for std::flush
    return 0;
}
