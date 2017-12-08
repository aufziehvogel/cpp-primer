#include "Sales_data.h"

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
