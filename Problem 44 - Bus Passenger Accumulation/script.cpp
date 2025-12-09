#include <iostream>

int main()
{
    int stops;
    int stop;
    int totalPassengers = 0;
    std::cout << "Enter a number of stops: ";
    std::cin >> stops;
    for (int i = 1; i <= stops; i++)
    {
        std::cin >> stop;
        totalPassengers += stop;
    }
    std::cout << std::endl
              << totalPassengers;

    return 0;
}