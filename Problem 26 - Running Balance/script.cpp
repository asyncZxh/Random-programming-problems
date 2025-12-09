#include <iostream>

int main()
{
    double balance = 0;
    double input;

    std::cout << "Enter multiple numbers: " << std::endl;
    while (true)
    {
        std::cin >> input;
        if (input == 999)
            break;
        balance += input;
    }

    std::cout << balance;

    return 0;
}