#include <iostream>
#include <string>

int main()
{
    char c;

    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;

    while (std::cin >> c) {
        if (c == 'a') {
            ++aCnt;
        } else if (c == 'e') {
            ++eCnt;
        } else if (c == 'i') {
            ++iCnt;
        } else if (c == 'o') {
            ++oCnt;
        } else if (c == 'u') {
            ++uCnt;
        }
    }

    std::cout << "a: " << aCnt << "\n";
    std::cout << "e: " << eCnt << "\n";
    std::cout << "i: " << iCnt << "\n";
    std::cout << "o: " << oCnt << "\n";
    std::cout << "u: " << uCnt << "\n";
    std::cout << std::flush;

    return 0;
}
