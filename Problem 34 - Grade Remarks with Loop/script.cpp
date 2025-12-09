#include <iostream>

int main()
{
    int grades[5];
    std::string remarks[5];
    std::cout
        << "Enter 5 grades: " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> grades[i];
        if (grades[i] >= 75)
            remarks[i] = "Pass";
        else
            remarks[i] = "Fail";
    }
    std::cout << std::endl;
    for (std::string result : remarks)
    {
        std::cout << result << std::endl;
    }

    return 0;
}