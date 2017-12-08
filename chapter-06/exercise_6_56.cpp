#include <vector>
#include <iostream>

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    return a / b;
}

using MathOpFunction = int(*)(int, int);

int main()
{
    int a = 5, b = 6;

    std::vector<MathOpFunction> v;
    v.push_back(sum);
    v.push_back(sub);
    v.push_back(multiply);
    v.push_back(divide);

    for (MathOpFunction f : v)
    {
        std::cout << "Result of math operation f(" << a << ", " << b << "): "
                  << f(a, b) << std::endl;
    }
}
