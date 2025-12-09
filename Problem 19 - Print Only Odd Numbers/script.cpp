#include <iostream>

int main()
{
    int integer;
    std::cout << "Enter a positive integer: ";
    std::cin >> integer;

    for (int i = 1; i <= integer; i++)
    {
        if (!(i % 2 == 0))
            std::cout << i << " ";
    }

    return 0;
}