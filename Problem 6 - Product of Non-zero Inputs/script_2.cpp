#include <vector>
#include <iostream>

int main()
{
    std::vector<int> integers;
    int integer;
    int product = 1;
    std::cout << "Enter integers: " << std::endl;
    while (true)
    {
        std::cin >> integer;
        if (integer == -1)
            break;
        else if (integer == 0)
            continue;
        integers.push_back(integer);
    }

    if (!integers.empty())
    {
        for (int i = 0; i < integers.size(); i++)
        {
            product *= integers[i];
        }
    }
    else
        product = 0;

    std::cout << std::endl;
    std::cout << product;

    return 0;
}