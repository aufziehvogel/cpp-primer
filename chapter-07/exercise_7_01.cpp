#include <iostream>

#include "Sales_data_v1.h"

int main()
{
    Sales_data total;
    double pricePerItem;

    if (std::cin >> total.isbn >> total.unitsSold >> pricePerItem) {
        total.revenue = total.unitsSold * pricePerItem;       

        Sales_data trans;

        while (std::cin >> trans.isbn >> trans.unitsSold >> pricePerItem) {
            trans.revenue = trans.unitsSold * pricePerItem;

            if (total.isbn == trans.isbn) {
                total.unitsSold += trans.unitsSold;
                total.revenue += trans.revenue;
            } else {
                double avgPrice = total.revenue / total.unitsSold;
                std::cout << total.isbn << " " << total.unitsSold << " "
                          << avgPrice << std::endl;
                total = trans;
            }
        }

        double avgPrice = total.revenue / total.unitsSold;
        std::cout << total.isbn << " " << total.unitsSold << " "
                  << avgPrice << std::endl;
    }
    else {
        std::cerr << "No data" << std::endl;
    }

    return 0;
}
