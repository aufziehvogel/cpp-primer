#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data {
    std::string isbn() const
    {
        return bookNo;
    }

    Sales_data& combine(const Sales_data&);
    double avgPrice() const;

    std::string bookNo;
    unsigned int unitsSold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);

#endif
