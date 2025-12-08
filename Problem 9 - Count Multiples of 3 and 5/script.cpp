#include <iostream>

int main()
{
    int n;
    int integer;
    int m3 = 0;
    int m5 = 0;
    int m35 = 0;

    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Enter integer: " << std::endl;
    for (int i = 1; i <= n; i++)
    {
        std::cin >> integer;
        if (integer % 3 == 0)
            m3++;
        if (integer % 5 == 0)
            m5++;
        if (integer % 3 == 0 && integer % 5 == 0)
            m35++;
    }

    std::cout << m3 << " " << m5 << " " << m35;

    return 0;
}