#include <iostream>

int main()
{
    int integer;
    std::cout << "Enter an integer: ";
    std::cin >> integer;

    for (int i = integer; i >= 1; --i)
    {
        std::cout << i << std::endl;
        if (i == 1)
            std::cout << "Blastoff!";
    }

    return 0;
}