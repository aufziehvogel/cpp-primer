#include <vector>
#include <iostream>

int main()
{
    std::vector<int> ivec(4, 0);
    std::vector<int>::size_type cnt = ivec.size();

    for (std::vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--) {
        ivec[ix] = cnt;
    }

    for (int val : ivec) {
        std::cout << val << std::endl;
    }

    return 0;
}
