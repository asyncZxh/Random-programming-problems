#include <iostream>

int main()
{
    int balance;
    int amount;
    std::cout << "Enter Balance: ";
    std::cin >> balance;

    std::cout << "Enter Withdrawal Amount: ";
    std::cin >> amount;

    if ((amount <= balance) && (amount % 100 == 0))
        std::cout << "Approved";
    else
        std::cout << "Denied";

    return 0;
}