#include <iostream>
#include <sstream>

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
    std::istringstream strm("This is a dummy stream");

    read(strm);

    if (!strm.eof()) {
        std::cout << "EOF was reset" << std::endl;
    } else {
        std::cout << "EOF was not reset" << std::endl;
    }

    return 0;
}
