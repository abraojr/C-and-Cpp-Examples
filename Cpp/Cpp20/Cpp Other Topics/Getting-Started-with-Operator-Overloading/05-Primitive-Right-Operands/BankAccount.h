#pragma once
#include <string>

class BankAccount
{
private:
    int account_id;
    std::string name;
    float balance;
    float cc_due;

public:
    BankAccount(int account_id, std::string name, float balance);

    std::string get_name() const
    {
        return name;
    }

    float get_balance() const
    {
        return balance;
    }

    bool buy_on_credit(float amount);

    bool pay_off_credit();

    void show() const;

    bool operator<(const BankAccount &other) const
    {
        std::cout << "Invoking bool operator<(const BankAccount &other) const" << std::endl;
        float this_balance = this->balance - this->cc_due;
        float other_balance = other.balance - other.cc_due;

        return this_balance < other_balance;
    }

    bool operator<(double other) const
    {
        std::cout << "Invoking bool operator<(double other)const" << std::endl;

        float this_balance = this->balance - this->cc_due;

        return this_balance < other;
    }
};
