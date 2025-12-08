#include <iostream>

int main()
{
    int integer;
    int sum = 0;
    std::cout << "Enter an integer: " << std::endl;
    while (sum < 100)
    {
        std::cin >> integer;
        sum += integer;
    }

    std::cout << std::endl;
    std::cout << sum;

    return 0;
}