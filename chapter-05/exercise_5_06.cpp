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

    unsigned int idx = (points - 50) / 10;
    std::string grade = points < 60 ? grades[0] : grades[idx];
    std::cout << grade << std::endl;

    return 0;
}
