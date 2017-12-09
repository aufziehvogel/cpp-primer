#include "Sales_data.h"
#include <iostream>

Sales_data::Sales_data(std::istream &in)
{
    read(in, *this);
}

double Sales_data::avgPrice() const
{
    if (unitsSold)
        return revenue / unitsSold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    unitsSold += rhs.unitsSold;
    revenue += rhs.revenue;

    return *this;
}

std::ostream& print(std::ostream &out, const Sales_data &data)
{
    out << data.isbn() << " " << data.unitsSold << " " << data.avgPrice();
    return out;
}

std::istream& read(std::istream &in, Sales_data &data)
{
    double pricePerItem;
    in >> data.bookNo >> data.unitsSold >> pricePerItem;
    data.revenue = data.unitsSold * pricePerItem;

    return in;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
