#include <iostream>

int main()
{
    int x, y, z;
    std::cout << "Enter 3 integer: ";
    std::cin >> x >> y >> z;

    if (x > y && x > z)
        std::cout << x;
    else if (y > x && y > z)
        std::cout << y;
    else if (z > x && z > y)
        std::cout << z;

    return 0;
}