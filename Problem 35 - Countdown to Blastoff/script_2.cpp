#include <iostream>
#include <thread>
#include <chrono>

int main()
{
    int integer;
    std::cout << "Enter an integer: ";
    std::cin >> integer;

    for (int i = integer; i >= 1; --i)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << i << std::endl;
        if (i == 1)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            std::cout << "Blastoff!";
        }
    }

    return 0;
}