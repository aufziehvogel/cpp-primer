#include <iostream>

// Discussion: The version with references is easier to use than
// the version with pointers (exercise 6.10), because the user of
// our function does not have to explicitely create pointers
// if he does not have pointers, yet (which we want to avoid
// as often as possible due to the increased efforts for
// memory management required with pointers).

void swap_with_ref(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a, b;

    std::cin >> a >> b;
    swap_with_ref(a, b);

    std::cout << "Swapped: " << a << " " << b << std::endl;

    return 0;
}
