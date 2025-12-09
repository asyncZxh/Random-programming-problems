#include <iostream>

const std::string USERNAME = "admin";
const std::string PASSWORD = "12345";

int main()
{
    std::string user;
    std::string pass;

    std::cout << "Username: ";
    std::cin >> user;
    std::cout << "Password: ";
    std::cin >> pass;
    std::cout << std::endl;

    if (user == USERNAME && pass == PASSWORD)
    {
        std::cout << "ACCESS GRANTED" << std::endl;
        std::cout << "Welcome Admin!";
    }
    else
    {
        std::cout << "ACCESS DENIED" << std::endl;
        return 0;
    }

    return 0;
}