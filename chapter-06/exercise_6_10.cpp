#include <iostream>

void swap_with_pointers(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a, b;

    std::cin >> a >> b;
    swap_with_pointers(&a, &b);

    std::cout << "Swapped: " << a << " " << b << std::endl;

    return 0;
}
