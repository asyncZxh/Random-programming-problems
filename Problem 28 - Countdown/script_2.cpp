#include <iostream>
#include <thread>
#include <chrono>

int main()
{
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    for (int i = n; i >= 1; i--)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        std::cout << i << " ";
    }

    return 0;
}