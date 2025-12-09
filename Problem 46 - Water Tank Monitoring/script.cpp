#include <iostream>

const int MAX_CAPACITY = 1000;
int main()
{
    int input;
    int water = 0;
    std::cout << "Enter Water (L): " << std::endl;
    while (true)
    {
        std::cin >> input;
        water += input;
        if (water == MAX_CAPACITY)
        {
            std::cout << std::endl
                      << "Full";
            break;
        }
        else if (water > MAX_CAPACITY)
        {
            std::cout << std::endl
                      << "Overflow";
            break;
        }
    }

    return 0;
}