#include <iostream>

int main()
{
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    for (int i = n; i >= 1; i--)
    {
        std::cout << i << " ";
    }

    return 0;
}