#include <iostream>

int main()
{
    int integer;
    int negative = 0;
    std::cout << "Enter integers: " << std::endl;
    while (true)
    {
        std::cin >> integer;
        if (integer > 0)
            break;
        integer < 0 ? negative++ : 0;
    }
    std::cout << std::endl
              << negative;

    return 0;
}