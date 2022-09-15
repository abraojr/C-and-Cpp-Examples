#pragma once
#include <string>

class BankAccount
{
private:
    std::string name{};
    float balance{0};

public:
    BankAccount(std::string n = "Unknown", float b = 100.0f);

    std::string get_name();

    float get_balance();
};
