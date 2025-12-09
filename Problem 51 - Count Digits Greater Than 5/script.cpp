#include <iostream>

int main()
{
    int integer;
    int count = 0;
    std::cout << "Enter a positive integer: ";
    std::cin >> integer;
    for (int i = 0; i < std::to_string(integer).length(); i++)
    {
        if ((std::to_string(integer)[i] - '0') > 5)
            count++;
    }
    std::cout << std::endl
              << count;

    return 0;
}