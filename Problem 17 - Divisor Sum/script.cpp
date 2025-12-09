#include <iostream>

int main()
{
    int integer;
    int sum = 0;

    std::cout << "Enter a positive integer: ";
    std::cin >> integer;
    for (int i = 1; i <= integer; i++)
    {
        if (integer % i == 0)
            sum += i;
    }

    std::cout << sum;

    return 0;
}