#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> grades = {"F", "D", "C", "B", "A", "A++"};

    unsigned short points;
    std::cin >> points;

    if (points > 100) {
        std::cerr << "Grades must be between 0 and 100" << std::endl;
        return 1;
    }

    if (points < 60) {
        std::cout << grades[0];
    } else {
        unsigned int idx = (points - 50) / 10;
        std::cout << grades[idx];
    }
    std::cout << std::endl;

    return 0;
}
