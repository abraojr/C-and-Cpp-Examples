#pragma once
#include <string>

class BankAccount
{
private:
    std::string name;
    float balance;

public:
    BankAccount(std::string name, float balance);

    std::string get_name() const;

    float get_balance() const;

    std::string &get_name();

    float &get_balance();
};
