#ifndef Bank_hpp
#define Bank_hpp

#include <stdio.h>
#include "Account.hpp"
#include <vector>
#include <string>

class Bank {
private:
    std::vector<Account> accounts;
public:
    void addAccount(int accountNumber, std::string name, double balance);
    void deposit(int accountNumber, double amount);
    void withdraw(int accountNumber, double amount);
    void displayAccount(int accountNumber) const;
    void displayAllAccounts() const;
};

#endif /* Bank_hpp */
