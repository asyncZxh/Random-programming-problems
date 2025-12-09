#include <iostream>

int main()
{
    int integer;
    int reversed;

    std::cout << "Enter a positive integer: ";
    std::cin >> integer;
    std::string convertToString = std::to_string(integer);
    std::string reversedString;

    for (int i = std::to_string(integer).length() - 1; i >= 0; i--)
    {
        reversedString += convertToString[i];
    }
    reversed = std::stoi(reversedString);
    std::cout << reversed;

    return 0;
}