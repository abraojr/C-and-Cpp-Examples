#pragma once
#include <string>
#include <vector>

class BankAccount
{
private:
    std::string name;
    float balance;
    std::vector<std::string> transaction_log;

public:
    BankAccount(std::string name, float balance);

    bool withdraw(float amount);

    bool deposit(float amount);

    friend void display_transaction_report(const BankAccount &bank_account);
};
