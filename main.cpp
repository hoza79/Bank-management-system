#include <iostream>
#include "Bank.hpp"

int main() {
    Bank bank;
    
    // Adding accounts
    bank.addAccount(101, "Alice", 1000);
    bank.addAccount(102, "Bob", 1500);

    // Displaying all accounts
    std::cout << "All accounts:\n";
    bank.displayAllAccounts();
    
    // Depositing money
    bank.deposit(101, 500);
    
    // Withdrawing money
    bank.withdraw(102, 200);
    
    // Displaying individual account
    std::cout << "\nDisplaying Alice's account:\n";
    bank.displayAccount(101);
    
    // Displaying all accounts after transactions
    std::cout << "\nAll accounts after transactions:\n";
    bank.displayAllAccounts();
    
    return 0;
}
