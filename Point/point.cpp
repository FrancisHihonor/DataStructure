#include <iostream>
#include <string>

int main(void)
{
    int a = 9;
    int* n;
    n = &a;
    std::cout << "a = " << a << ", n = " << *n << std::endl;
    return 0;
}
