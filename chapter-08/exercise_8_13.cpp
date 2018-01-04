#include <sstream>
#include <iostream>
#include <fstream>
#include <vector>

struct PersonInfo {
    std::string name;
    std::vector<std::string> phones;
};

int main(int argc, char **argv)
{
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " file" << std::endl;
        return 1;
    }

    std::ifstream infile(argv[1]);

    std::string line, word;
    std::vector<PersonInfo> people;

    std::istringstream record;

    while(std::getline(infile, line)) {
        PersonInfo info;
        record.str(line);
        record.clear();

        record >> info.name;
        while(record >> word) {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    for (PersonInfo person : people) {
        std::cout << person.name << ": " << person.phones.size() << " numbers" << std::endl;
    }

    return 0;
}
