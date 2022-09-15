#pragma once
#include <string>

class BankAccount
{
private:
    std::string name{};
    float balance{0};
    std::string account_type{};

public:
    BankAccount() = default;

    BankAccount(std::string name, float balance, std::string account_type);

    std::string get_name();

    float get_balance();

    std::string get_account_type();
};
