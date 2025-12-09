#include <iostream>

int main()
{
    int a;
    int b;
    int sum = 0;

    std::cout << "Enter 2 integers: ";
    std::cin >> a >> b;

    if (a <= b)
    {
        for (int i = a; i <= b; i++)
        {
            sum += i;
        }
    }
    else
    {
        std::cout << "(A) must be less than or equal to (B)";
        return 0;
    }
    std::cout << sum;

    return 0;
}