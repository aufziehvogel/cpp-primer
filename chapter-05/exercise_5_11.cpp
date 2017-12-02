#include <iostream>
#include <string>

int main()
{
    std::string buf;

    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned int whitespaceCnt = 0;

    while (std::getline(std::cin, buf)) {
        for (char c : buf) {
            switch (c) {
                case 'a':
                case 'A':
                    ++aCnt;
                    break;
                case 'e':
                case 'E':
                    ++eCnt;
                    break;
                case 'i':
                case 'I':
                    ++iCnt;
                    break;
                case 'o':
                case 'O':
                    ++oCnt;
                    break;
                case 'u':
                case 'U':
                    ++uCnt;
                    break;
                case ' ':
                case '\t':
                    ++whitespaceCnt;
                    break;
            }
        }

        // add one for newline char (removed by std::getline)
        ++whitespaceCnt;
    }

    std::cout << "a: " << aCnt << "\n";
    std::cout << "e: " << eCnt << "\n";
    std::cout << "i: " << iCnt << "\n";
    std::cout << "o: " << oCnt << "\n";
    std::cout << "u: " << uCnt << "\n";
    std::cout << "whitespace: " << whitespaceCnt << "\n";
    std::cout << std::flush;

    return 0;
}
