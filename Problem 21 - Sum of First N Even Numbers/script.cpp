#include <iostream>

int main()
{
    int n;
    int sum = 0;
    int even = 0;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        even += 2;
        sum += even;
    }
    std::cout << sum;

    return 0;
}