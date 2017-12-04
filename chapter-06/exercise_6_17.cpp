#include <iostream>
#include <string>
#include <cctype>

bool has_capitals(const std::string &s)
{
    for (char c : s) {
        if (std::isupper(c)) {
            return true;
        }
    }
    return false;
}

void change_to_lower(std::string &s)
{
    for (char &c : s) {
        c = std::tolower(c);
    }
}

int main()
{
    std::string s;
    std::cout << "Write a line of text" << std::endl;

    std::getline(std::cin, s);

    if (has_capitals(s)) {
        std::cout << "Your input has uppercase letters\n";

        change_to_lower(s);
        std::cout << "To lowercase: " << s << "\n";
        std::cout << std::flush;
    } else {
        std::cout << "Your string does not have uppercase letters."
                  << std::endl;
    }

    return 0;
}
