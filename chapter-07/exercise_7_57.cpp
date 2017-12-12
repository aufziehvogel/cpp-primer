#include "account.h"
#include <iostream>

int main()
{
    Account acc("dummy-user", 12300);
    int interest = acc.interest();

    std::cout << "User " << acc.owner() << " gets " << interest
        << " of interest for his account worth " << acc.amount() << std::endl;

    return 0;
}
