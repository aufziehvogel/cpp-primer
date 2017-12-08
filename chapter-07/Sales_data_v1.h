#ifndef SALES_DATA_V1_H
#define SALES_DATA_V1_H

#include <string>

struct Sales_data
{
    std::string isbn;
    unsigned int unitsSold;
    double revenue;
};

#endif
