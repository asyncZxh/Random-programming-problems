#include <iostream>

int main()
{
    int integer;
    std::cout << "Enter integers: " << std::endl;
    while (1)
    {
        std::cin >> integer;
        if (integer % 9 == 0)
        {
            std::cout << std::endl
                      << integer;
            break;
        }
    }

    return 0;
}