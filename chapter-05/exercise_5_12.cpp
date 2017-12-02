#include <iostream>
#include <string>

int main()
{
    char c;

    unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;

    bool isFState = false;
    while (std::cin >> c) {
        if (isFState) {
            switch (c) {
                case 'f':
                    ++ffCnt;
                    break;
                case 'l':
                    ++flCnt;
                    break;
                case 'i':
                    ++fiCnt;
                    break;
            }

            isFState = false;
        } else if (c == 'f') {
            isFState = true;
        }
    }

    std::cout << "ff: " << ffCnt << "\n";
    std::cout << "fl: " << flCnt << "\n";
    std::cout << "fi: " << fiCnt << "\n";
    std::cout << std::flush;

    return 0;
}
