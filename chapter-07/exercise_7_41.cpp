#include "Sales_data.h"

int main()
{
    Sales_data s1;
    std::cout << "=======" << std::endl;

    Sales_data s2("12345");
    std::cout << "=======" << std::endl;

    Sales_data s3("12345", 10, 10);
    std::cout << "=======" << std::endl;

    Sales_data s4(std::cin);
    std::cout << "=======" << std::endl;
}
