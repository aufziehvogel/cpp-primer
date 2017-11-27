#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 8, 16, 31};

    for (int &elem : v) {
        elem = elem % 2 == 0 ? elem : 2 * elem;
    }

    // repeat begin/end loop for training
    for (auto it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}
