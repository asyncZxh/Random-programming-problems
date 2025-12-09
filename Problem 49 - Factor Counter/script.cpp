#include <iostream>

int main()
{
    int integer;
    int factorCount = 0;
    std::cout << "Enter a positive integer: ";
    std::cin >> integer;

    for (int i = 1; i <= integer; i++)
    {
        if (integer % i == 0)
            factorCount++;
    }
    std::cout << std::endl
              << factorCount;

    return 0;
}