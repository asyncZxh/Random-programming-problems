#include <iostream>

int main()
{
    int a;
    int b;
    int product = 1;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        product *= i;
    }
    std::cout << product;

    return 0;
}