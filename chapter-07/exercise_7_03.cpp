#include <iostream>

#include "Sales_data.h"

int main()
{
    Sales_data total;
    double pricePerItem;

    if (std::cin >> total.bookNo >> total.unitsSold >> pricePerItem) {
        total.revenue = total.unitsSold * pricePerItem;       

        Sales_data trans;

        while (std::cin >> trans.bookNo >> trans.unitsSold >> pricePerItem) {
            trans.revenue = trans.unitsSold * pricePerItem;

            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                std::cout << total.isbn() << " " << total.unitsSold << " "
                          << total.avgPrice() << std::endl;
                total = trans;
            }
        }

        std::cout << total.isbn() << " " << total.unitsSold << " "
                  << total.avgPrice() << std::endl;
    }
    else {
        std::cerr << "No data" << std::endl;
    }

    return 0;
}
