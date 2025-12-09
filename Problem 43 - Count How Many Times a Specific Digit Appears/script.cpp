#include <iostream>

int main()
{
    int number;
    int digit;
    int count = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::string convertToString = std::to_string(number);

    std::cout << "Enter target digit: ";
    std::cin >> digit;

    for (int i = 0; i < convertToString.length(); i++)
    {
        if ((convertToString[i] - '0') == digit)
            count++;
    }
    std::cout << std::endl
              << count;

    return 0;
}