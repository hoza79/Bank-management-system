#ifndef Account_hpp
#define Account_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Account {
private:
    int accountNumber;
    std::string accountHolder;
    double balance;
public:
    Account(int accountNumber, std::string name, double balance);
    
    int getAccountNumber() const;
    void deposit(double amount);
    void withdraw(double amount);
    void displayAccount() const;
};
#endif /* Account_hpp */
