#include <iostream>

std::string makePlural(size_t ctr, const std::string &word,
        const std::string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    std::cout << makePlural(2, "success", "es") << "\n";
    std::cout << makePlural(2, "failure") << "\n";
    std::cout << std::flush;

    return 0;
}
