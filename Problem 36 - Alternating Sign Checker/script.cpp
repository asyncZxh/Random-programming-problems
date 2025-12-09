#include <iostream>

int main()
{
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    if ((a > 0 && b < 0) || (a < 0 && b > 0))
        std::cout << "Alternating";
    else
        std::cout << "Not Alternating";

    return 0;
}
