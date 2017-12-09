#include "Sales_data.h"
#include <iostream>

void print_obj(const Sales_data &data, const std::string &name)
{
    std::cout << name << " ";
    print(std::cout, data);
    std::cout << "\n";
}

int main()
{
    Sales_data s1;
    Sales_data s2 = Sales_data("12345");
    Sales_data s3 = Sales_data("34567", 10, 22.5);
    Sales_data s4 = Sales_data(std::cin);

    print_obj(s1, "s1");
    print_obj(s2, "s2");
    print_obj(s3, "s3");
    print_obj(s4, "s4");

    std::cout << std::flush;

    return 0;
}
