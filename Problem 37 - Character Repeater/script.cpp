#include <iostream>

int main()
{
    char c;
    int n;
    std::cout << "Enter character and a number: ";
    std::cin >> c;
    std::cin >> n;
    std::cout << std::endl;

    for (int i = 1; i <= n; i++)
    {
        std::cout << c;
    }

    return 0;
}