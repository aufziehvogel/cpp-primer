#include "Sales_data.h"
#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0]
                  << " transactions-file results-file\n";
        return 1;
    }

    const std::string &transactionsFile = argv[1];
    const std::string &resultFile = argv[2];
    std::ifstream input(transactionsFile);
    std::ofstream output(resultFile);

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
                print(output, total);
                output << std::endl;
                total = trans;
            }
        }

        print(output, total);
        output << std::endl;
    }
    else {
        std::cerr << "No data" << std::endl;
    }

    return 0;
}
