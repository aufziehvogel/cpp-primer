#include "person.h"
#include <iostream>

std::istream& read(std::istream &in, Person &person)
{
    in >> person.name >> person.address;
    return in;
}

std::ostream& print(std::ostream &out, const Person &person)
{
    out << person.getName() << " " << person.getAddress();
    return out;
}
