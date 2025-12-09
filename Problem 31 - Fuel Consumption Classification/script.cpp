#include <iostream>

int main()
{
    double kmPerLiter;
    std::cout << "Enter car's fuel: ";
    std::cin >> kmPerLiter;

    if (kmPerLiter >= 20)
        std::cout << "Excellent";
    else if (kmPerLiter >= 10 && kmPerLiter < 20)
        std::cout << "Good";
    else if (kmPerLiter < 10 && kmPerLiter > 0)
        std::cout << "Poor";
    else
        std::cout << "Invalid";

    return 0;
}