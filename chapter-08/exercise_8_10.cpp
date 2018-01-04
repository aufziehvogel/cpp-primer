#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>

std::vector<std::string> readlines(std::istream &in)
{
    std::string buf;
    std::vector<std::string> vec;

    while (std::getline(in, buf)) {
        vec.push_back(buf);
    }

    return vec;
}

int main(int argc, char **argv)
{
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " file" << std::endl;
        return 1;
    }

    std::string filepath = argv[1];

    std::ifstream infile(filepath);
    std::vector<std::string> lines = readlines(infile);

    std::istringstream linebuf;
    std::string word;
    for (std::string line : lines) {
        linebuf.str(line);
        linebuf.clear();

        while (linebuf >> word) {
            std::cout << word << "\n";
        }
    }

    return 0;
}
