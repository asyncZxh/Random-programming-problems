#include <iostream>

int main()
{
    int grade;
    std::cout << "Enter Grade: ";
    std::cin >> grade;

    if (grade >= 90 && grade <= 100)
        std::cout << "A";
    else if (grade >= 80 && grade <= 89)
        std::cout << "B";
    else if (grade >= 70 && grade <= 79)
        std::cout << "C";
    else if (grade >= 60 && grade <= 69)
        std::cout << "D";
    else if (grade > 100 || grade < 0)
        std::cout << "invalid input";
    else
        std::cout << "F";

    return 0;
}