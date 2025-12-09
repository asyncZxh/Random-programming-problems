#include <iostream>

int main()
{
    int n;
    int integer;
    int positive = 0;
    std::cout << "Enter numbers: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        std::cin >> integer;
        if (integer > 0)
            positive++;
    }

    std::cout << std::endl
              << positive;

    return 0;
}