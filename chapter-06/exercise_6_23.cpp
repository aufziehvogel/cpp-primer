#include <iostream>

void print(const int *beg, const int *end)
{
    for (const int *it = beg; it != end; ++it) {
        std::cout << *it << std::endl;
    }
}

void print(const int arr[], size_t size)
{
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << std::endl;
    }
}

int main()
{
    int i = 0, j[2] = {0, 1};

    print(std::begin(j), std::end(j));
    print(&i, 1);

    return 0;
}
