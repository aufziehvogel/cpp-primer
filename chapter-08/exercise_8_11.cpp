#include <sstream>
#include <iostream>
#include <vector>

struct PersonInfo {
    std::string name;
    std::vector<std::string> phones;
};

int main()
{
    std::string line, word;
    std::vector<PersonInfo> people;

    std::istringstream record;

    while(std::getline(std::cin, line)) {
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
