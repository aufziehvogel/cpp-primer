#include <iostream>

class NoDefault
{
public:
    NoDefault(int val) : value(val) { }

    int getValue()
    {
        return value;
    }

private:
    int value;
};

class C
{
public:
    C() : noDefault(NoDefault(42)) { }

    int getNoDefaultValue()
    {
        return noDefault.getValue();
    }

private:
    NoDefault noDefault;
};

int main()
{
    C c;

    std::cout << c.getNoDefaultValue() << std::endl;

    return 0;
}
