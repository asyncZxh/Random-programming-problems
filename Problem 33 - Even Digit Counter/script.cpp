#include <iostream>

int main()
{
    int integer;
    int even = 0;
    std::cout << "Enter a positive integer: ";
    std::cin >> integer;
    std::string convertToString = std::to_string(integer);

    for (int i = 0; i < convertToString.length(); i++)
    {
        if (((convertToString[i] - '0') % 2) == 0)
            even++;
    }
    std::cout << even;

    return 0;
}