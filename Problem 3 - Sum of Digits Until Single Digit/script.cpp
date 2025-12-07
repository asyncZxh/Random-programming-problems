#include <iostream>

int main()
{
    long int number;
    std::cout << "Enter a positive number: ";
    std::cin >> number;
    std::string getNumber = std::to_string(number);

    while (getNumber.length() > 1)
    {
        long int result = 0;
        for (int i = 0; i < getNumber.length(); i++)
        {
            result += getNumber[i] - '0';
        }
        getNumber = std::to_string(result);
    }
    std::cout << getNumber;

    return 0;
}