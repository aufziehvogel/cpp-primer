#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account
{
public:
    Account(const std::string &owner, int amount)
        : ownerName(owner), amountInCents(amount) { }

    std::string owner() { return ownerName; }
    int amount() { return amountInCents; }
    int interest() { return amountInCents * interestRate; }

private:
    std::string ownerName;
    int amountInCents;
    static double calculateInterestRate()
    {
        return 0.005;
    }
    static double interestRate;
};

#endif
