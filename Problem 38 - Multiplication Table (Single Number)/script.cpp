#include <iostream>

int main()
{
    int integer;
    std::cout << "Enter a number: ";
    std::cin >> integer;

    for (int i = 1; i <= 10; i++)
    {
        std::cout << integer << " x " << i << " = " << (integer * i) << std::endl;
    }

    return 0;
}