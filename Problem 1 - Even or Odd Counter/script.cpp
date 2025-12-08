#include <iostream>

int main()
{
    int odd = 0;
    int even = 0;
    int number;
    std::cout << "Enter a number(s): " << std::endl;
    while (true)
    {
        std::cin >> number;
        if (!number)
            break;
        number % 2 == 0 ? even++ : odd++;
    }

    std::cout << "Even: " << even << " " << "Odd: " << odd;
    return 0;
}