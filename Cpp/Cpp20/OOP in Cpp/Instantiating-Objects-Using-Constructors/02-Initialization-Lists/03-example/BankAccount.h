#pragma once
#include <string>

class BankAccount
{
private:
    const std::string &name;
    const float &balance;
    const std::string &account_type;

public:
    BankAccount(const std::string &n, const float &b, const std::string &at);

    const std::string &get_name();

    const float &get_balance();

    const std::string &get_account_type();
};
