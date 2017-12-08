#include <vector>
#include <iostream>

int sum(int a, int b)
{
    return a + b;
}

using MathOpFunction = int(*)(int, int);

int main()
{
    int a = 5, b = 6;

    std::vector<MathOpFunction> v;
    v.push_back(sum);

    for (MathOpFunction f : v)
    {
        std::cout << "Result of math operation f(" << a << ", " << b << "): "
                  << f(a, b) << std::endl;
    }
}
