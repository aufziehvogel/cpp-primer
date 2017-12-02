#include <iostream>

// Discussion:
// This solution diminishes the readability of the code compared to a
// solution with a while block and without comma operator in the
// while condition, because we now have side effects in the while
// condition plus the reader has to know that the result of the
// comma operator is the result of the right-hand expression and
// the left-hand expression is discarded.

int main()
{
    int sum = 0, val = 0;
    
    while (val++, val <= 10)
        sum += val;

    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;

    return 0;
}
