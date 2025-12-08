#include <iostream>

int main()
{
    int a, b, c;
    int sum = 0;
    int product = 0;
    bool sign = (a < 0) == (b < 0);
    std::cout << "Enter 3 integers: ";
    std::cin >> a >> b >> c;

    for (int i = 1; i <= std::abs(b); i++)
    {
        sum += std::abs(a);
    }

    !sign ? product = sum : product = -sum;

    product == c ? std::cout << "YES" : std::cout << "NO";

    return 0;
}