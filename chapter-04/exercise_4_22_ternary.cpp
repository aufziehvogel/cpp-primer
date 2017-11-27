#include <string>
#include <iostream>

int main()
{
    unsigned short grade;

    std::cout << "Please enter grade" << std::endl;
    std::cin >> grade;

    if (grade > 100) {
        std::cerr << "Grade must be in range 0-100" << std::endl;
    }

    std::string finalgrade = (grade > 90) ? "high pass"
            : (grade >= 60 && grade <= 75) ? "low pass"
            : (grade < 60) ? "fail" : "pass";

    std::cout << finalgrade << std::endl;

    return 0;
}
