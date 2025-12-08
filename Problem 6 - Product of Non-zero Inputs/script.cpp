#include <iostream>

int main()
{
    int integer;
    int product = 1;
    bool isEmpty = true;
    // int multiplier = 1;
    std::cout << "Enter integers: " << std::endl;
    while (true)
    {
        std::cin >> integer;
        if (integer == -1)
            break;
        else if (integer == 0)
            continue;
        // multiplier *= integer;
        product *= integer;
        isEmpty = false;
    };

    if (isEmpty)
        product = 0;

    std::cout << std::endl;
    std::cout << product;

    return 0;
}
