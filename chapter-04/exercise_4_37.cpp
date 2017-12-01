#include <string>

int main()
{

    int i;
    double d;
    const std::string *ps;
    char *pc;
    void *pv;

    pv = const_cast<std::string*>(ps);
    i = static_cast<int>(*pc);
    pv = &d;
    pc = static_cast<char*>(pv);
}
