#include <iostream>
#include <vector>

int main()
{
    std::vector<int> integers;
    int integer;
    std::cout << "Enter integers: " << std::endl;
    while (true)
    {
        std::cin >> integer;
        if (integer == 0)
            break;
        integers.push_back(integer);
    }
    std::cout << std::endl;
    for (int e : integers)
        if (e % 2 == 0)
            std::cout << "Even" << std::endl;
        else
            std::cout << "Odd" << std::endl;
    return 0;
}