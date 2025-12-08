#include <iostream>

int main()
{

    int integer;
    int factor = 0;
    std::cout << "Enter a positive integer: ";
    std::cin >> integer;

    for (int i = 1; i <= integer; i++)
    {
        if (integer % i == 0)
            factor++;
    }

    std::cout << factor;

    return 0;
}