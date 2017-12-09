#include "Sales_data.h"
#include <iostream>

int main()
{
    Sales_data total = Sales_data(std::cin);
    double pricePerItem;

    if (!total.isbn().empty()) {
        Sales_data trans;

        while (read(std::cin, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(std::cout, total);
                std::cout << std::endl;
                total = trans;
            }
        }

        print(std::cout, total);
        std::cout << std::endl;
    }
    else {
        std::cerr << "No data" << std::endl;
    }

    return 0;
}
