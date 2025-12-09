#include <iostream>

int main()
{
    int integer;
    int count = 0;
    std::cout << "Enter an integer: ";
    std::cin >> integer;
    for (int i = 1; i <= integer; i++)
    {
        if ((i % 2 == 0) && (i % 3 == 0))
            count++;
    }
    std::cout << count;

    return 0;
}