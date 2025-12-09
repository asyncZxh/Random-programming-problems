#include <iostream>

int main()
{
    int temperature;
    std::cout << "Enter temmperature: ";
    std::cin >> temperature;

    if (temperature < 20)
        std::cout << "COLD";
    else if (temperature >= 20 && temperature <= 30)
        std::cout << "WARM";
    else if (temperature > 30)
        std::cout << "HOT";

    return 0;
}