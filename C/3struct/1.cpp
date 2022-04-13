#include <iostream>

struct A
{
    double a;
    char b;
};
int main()
{
    A a;
    std::cout << sizeof(a) << std::endl;
    system("pause");
    return 0;
}