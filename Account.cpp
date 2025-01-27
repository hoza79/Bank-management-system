#include "Account.hpp"

Account::Account(int accountNumber, std::string name, double balance) {
    this->accountNumber = accountNumber;
    this->accountHolder = name;
    this->balance = balance;
}

int Account::getAccountNumber() const {
    return accountNumber;
}

void Account::deposit(double amount) {
    balance += amount;
    std::cout << "Deposited " << amount << ", new balance is " << balance << "\n";
}

void Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        std::cout << "Withdrew " << amount << ", new balance is " << balance << "\n";
    } else {
        std::cout << "Insufficient balance!\n";
    }
}

void Account::displayAccount() const {
    std::cout << "Account Number: " << accountNumber << "\n";
    std::cout << "Account Holder: " << accountHolder << "\n";
    std::cout << "Balance: " << balance << "\n";
}
