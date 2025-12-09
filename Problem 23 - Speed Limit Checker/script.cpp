#include <iostream>

const int SPEED_LIMIT = 60;

int main()
{
    int s;
    std::cout << "Enter car's speed: ";
    std::cin >> s;

    if (s > SPEED_LIMIT)
        std::cout << "OVER SPEEDING";
    else if (s < 0)
        std::cout << "INVALID";
    else
        std::cout << "SAFE";

    return 0;
}