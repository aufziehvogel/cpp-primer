#include <iostream>

inline bool isShorter(const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;

    if (isShorter(s1, s2)) {
        std::cout << s1 << " is shorter than " << s2 << std::endl;
    } else  {
        std::cout << s1 << " is not shorter than " << s2 << std::endl;
    }
}
