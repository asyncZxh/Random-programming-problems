#include <iostream>

int main()
{
    long int number;
    std::cout << "Enter a positive number: ";
    std::cin >> number;
    std::string convertNumber = std::to_string(number);

    while (convertNumber.length() > 1)
    {
        long int result = 0;
        for (int i = 0; i < convertNumber.length(); i++)
        {
            result += convertNumber[i] - '0';
        }
        convertNumber = std::to_string(result);
    }

    std::cout << std::stoi(convertNumber);

    return 0;
}