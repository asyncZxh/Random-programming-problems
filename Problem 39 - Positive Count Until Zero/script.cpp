#include <iostream>

int main()
{
    int integer;
    int positive = 0;
    std::cout << "Enter integers: " << std::endl;
    while (true)
    {
        std::cin >> integer;
        if (integer == 0)
            break;
        else if (integer < 0)
            continue;
        positive++;
    }
    std::cout << std::endl
              << positive;

    return 0;
}