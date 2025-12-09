#include <iostream>

int main()
{
    int integer;
    int count = 0;
    std::cout << "Enter a positive integer: ";
    std::cin >> integer;
    std::string convertToString = std::to_string(integer);

    for (int i = 1; i <= convertToString.length(); i++)
    {
        count++;
    }

    std::cout << count;

    return 0;
}