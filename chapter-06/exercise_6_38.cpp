#include <iostream>

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};


auto arrRef(int i) -> int(&)[5]
{
    return (i % 2) ? odd : even;
}

int main()
{
    int in;
    std::cin >> in;

    int (&ref)[5] = arrRef(in);

    for (int value : ref) {
        std::cout << value << std::endl;
    }
}
