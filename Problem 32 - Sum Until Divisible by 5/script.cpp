#include <iostream>

int main()
{
    int integer;
    int sum = 0;
    std::cout << "Enter integers: " << std::endl;
    while (true)
    {
        std::cin >> integer;
        sum += integer;
        if (integer % 5 == 0)
            break;
    }
    std::cout << std::endl;
    std::cout << sum;

    return 0;
}