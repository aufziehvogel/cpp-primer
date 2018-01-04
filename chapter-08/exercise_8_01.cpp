#include <iostream>

std::istream& read(std::istream &in)
{
    std::string text;

    std::string buf;
    while (in >> buf) {
        text += buf;
    }

    std::cout << text << std::endl;

    if (in.eof()) {
        std::cout << "EOF is set" << std::endl;
    }

    in.clear(in.rdstate() & ~in.eofbit);

    return in;
}

int main()
{
    read(std::cin);

    if (!std::cin.eof()) {
        std::cout << "EOF was reset" << std::endl;
    } else {
        std::cout << "EOF was not reset" << std::endl;
    }

    return 0;
}
