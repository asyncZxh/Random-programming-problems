#include <iostream>

int main()
{
    std::string password;

    while (true)
    {
        std::cout << "Create Password: ";
        std::cin >> password;
        if (password.length() > 200)
        {
            std::cout << "Invalid" << std::endl
                      << std::endl;
            continue;
        }
        break;
    }

    password.length() >= 8 ? std::cout << "STRONG" : std::cout << "WEAK";

    return 0;
}