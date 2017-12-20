#include "Sales_data.h"
#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " transactions-file\n";
        return 1;
    }

    const std::string &transactionsFile = argv[1];
    std::ifstream input(transactionsFile);

    if (!input) {
        std::cerr << "Error while trying to open file '" << transactionsFile
            << "\n";
        return 1;
    }

    Sales_data total = Sales_data(input);
    double pricePerItem;

    if (!total.isbn().empty()) {
        Sales_data trans;

        while (read(input, trans)) {
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
