#include <iostream>

const int BASE_FARE = 40;
const int FARE_PER_KM = 7;
int main()
{
    int km;
    int fare = BASE_FARE;
    std::cout << "Enter distance (km): ";
    std::cin >> km;
    for (int i = 1; i <= km; i++)
    {
        fare += FARE_PER_KM;
    }
    std::cout << fare;

    return 0;
}