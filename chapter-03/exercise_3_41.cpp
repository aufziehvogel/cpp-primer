#include <vector>
#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4};

    std::vector<int> v(std::begin(arr), std::end(arr));

    for (int element : v) {
        std::cout << element << std::endl;
    }

    return 0;
}
