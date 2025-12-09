#include <iostream>

int main()
{
    char c;
    std::cout << "Enter a single character: ";
    std::cin >> c;

    if (std::isupper(c))
        std::cout << "UPPERCASE LETTER";
    else if (std::islower(c))
        std::cout << "LOWERCASE LETTER";
    else if (std::isdigit(c))
        std::cout << "DIGIT";
    else
        std::cout << "OTHER";

    return 0;
}