#include <iostream>

int main()
{
    const unsigned int cols = 4;
    const unsigned int rows = 3;

    int ia[rows][cols] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    using row_t = int(&)[cols];
    for (row_t row : ia) {
        for (int value : row) {
            std::cout << value << " ";
        }
    }
    std::cout << std::endl;

    for (unsigned int i = 0; i < rows; ++i) {
        for (unsigned int j = 0; j < cols; ++j) {
            std::cout << ia[i][j] << " ";
        }
    }
    std::cout << std::endl;
    
    using row_ptr = int(*)[cols];
    using val_ptr = int*;
    for (row_ptr row = std::begin(ia); row != std::end(ia); ++row) {
        for (val_ptr value = std::begin(*row); value != std::end(*row); ++value) {
            std::cout << *value << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
