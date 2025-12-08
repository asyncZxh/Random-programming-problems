#include <iostream>

int main()
{
    int n;
    int result = 0;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            result -= i;
        else
            result += i;
    }

    std::cout << result;

    return 0;
}