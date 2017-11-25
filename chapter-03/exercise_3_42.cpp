#include <vector>
#include <iostream>
#include <cstddef>

int main()
{
    const size_t len = 4;
    std::vector<int> v = {-1, 0, 1, 2};
    int arr[len];

    for (decltype(v.size()) i = 0; i < v.size(); ++i) {
        arr[i] = v[i];
    }

    for (size_t i = 0; i < len; ++i) {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}
