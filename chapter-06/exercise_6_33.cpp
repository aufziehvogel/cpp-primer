#include <iostream>
#include <vector>

void print_recursive(std::vector<int>::iterator beg,
                     std::vector<int>::iterator end)
{
    if (beg == end)
        return;

    std::cout << *beg << std::endl;
    print_recursive(++beg, end);
}

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};

    print_recursive(std::begin(v), std::end(v));

    return 0;
}
