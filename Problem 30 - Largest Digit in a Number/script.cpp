#include <iostream>

int main()
{
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::string convertToString = std::to_string(n);
    int max = convertToString[0] - '0';

    for (int i = 1; i < convertToString.length(); i++)
    {
        if ((convertToString[i] - '0') > max)
            max = convertToString[i] - '0';
    }
    std::cout << max;

    return 0;
}