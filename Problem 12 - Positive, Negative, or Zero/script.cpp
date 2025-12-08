#include <iostream>
int main()
{
    int integer;
    std::cout << "Enter an integer: ";
    std::cin >> integer;
    if (integer > 0)
        std::cout << "POSITIVE";
    else if (integer < 0)
        std::cout << "NEGATIVE";
    else
        std::cout << "ZERO";

    return 0;
}