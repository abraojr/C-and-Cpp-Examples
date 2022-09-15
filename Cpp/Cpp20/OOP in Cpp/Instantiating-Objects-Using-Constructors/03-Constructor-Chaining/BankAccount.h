#pragma once
#include <string>

class BankAccount
{
private:
    std::string name{};
    float balance{0};
    std::string account_type{};
    float service_charge{0};

public:
    BankAccount() = default;

    BankAccount(std::string n);

    BankAccount(std::string n, float b);

    BankAccount(std::string n, float b, std::string at);

    BankAccount(std::string n, float b, std::string at, float sc);

    std::string get_name();

    float get_balance();

    std::string get_account_type();

    float get_service_charge();
};
