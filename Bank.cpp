#include "Bank.hpp"
#include <iostream>

void Bank::addAccount(int accountNumber, std::string name, double balance) {
    Account newAccount(accountNumber, name, balance);
    accounts.push_back(newAccount);
}

void Bank::deposit(int accountNumber, double amount) {
    for (auto& account : accounts) {
        if (account.getAccountNumber() == accountNumber) {
            account.deposit(amount);
            std::cout << "Deposited " << amount << " to account " << accountNumber << "\n";
            return;
        }
    }
    std::cout << "Account not found!\n";
}

void Bank::withdraw(int accountNumber, double amount) {
    for (auto& account : accounts) {
        if (account.getAccountNumber() == accountNumber) {
            account.withdraw(amount);
            return;
        }
    }
    std::cout << "Account not found!\n";
}

void Bank::displayAccount(int accountNumber) const {
    for (const auto& account : accounts) {
        if (account.getAccountNumber() == accountNumber) {
            account.displayAccount();
            return;
        }
    }
    std::cout << "Account not found!\n";
}

void Bank::displayAllAccounts() const {
    for (const auto& account : accounts) {
        account.displayAccount();
    }
}

