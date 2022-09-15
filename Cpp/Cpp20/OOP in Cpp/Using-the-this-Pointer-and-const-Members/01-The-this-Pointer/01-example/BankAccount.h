#pragma once
#include <string>

class BankAccount
{
private:
    std::string name{};
    float balance{0};

public:
    BankAccount(std::string n, float b);

    void display();

    bool withdraw(float amount);

    bool deposit(float amount);
};
