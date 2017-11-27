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

    std::string finalgrade;

    if (grade > 90)
        finalgrade = "high pass";
    else if (grade > 75)
        finalgrade = "pass";
    else if (grade >= 60)
        finalgrade = "low pass";
    else
        finalgrade = "fail";

    std::cout << finalgrade << std::endl;

    return 0;
}
