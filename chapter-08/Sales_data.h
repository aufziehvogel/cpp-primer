#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

class Sales_data {
    friend Sales_data add(const Sales_data&, const Sales_data&);
    friend std::ostream& print(std::ostream&, const Sales_data&);
    friend std::istream& read(std::istream&, Sales_data&);

public:
    Sales_data(const std::string &isbn, unsigned int unitsSold,
               double revenue) : bookNo(isbn), unitsSold(unitsSold),
               revenue(revenue)
    {
    }

    Sales_data(const std::string &isbn) : Sales_data(isbn, 0, 0)
    {
    }

    Sales_data() : Sales_data("", 0, 0)
    {
    }

    Sales_data(std::istream&);

    std::string isbn() const
    {
        return bookNo;
    }

    Sales_data& combine(const Sales_data&);

private:
    double avgPrice() const;

    std::string bookNo;
    unsigned int unitsSold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);

#endif
