#include <iostream>
#include <string>

struct Y;

struct X
{
    Y *y_ptr;
    std::string name = "X";
};

struct Y
{
    X x_obj;
    std::string name = "Y";
};

int main()
{
    X x;

    Y y;
    y.x_obj = x;

    std::cout << y.name << std::endl;
    std::cout << y.x_obj.name << std::endl;
}
