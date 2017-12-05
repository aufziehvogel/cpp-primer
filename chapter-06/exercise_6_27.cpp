#include <iostream>
#include <initializer_list>

int listsum(std::initializer_list<int> list)
{
    int sum = 0;
    for (int val : list) {
        sum += val;
    }
    return sum;
}

int main()
{
    int sum = listsum({1, 2, 3, 4, 5});
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
