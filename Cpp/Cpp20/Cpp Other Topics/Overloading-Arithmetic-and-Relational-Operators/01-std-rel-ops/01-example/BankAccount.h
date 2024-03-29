#pragma once
#include <cmath>
#include <string>
#include <utility>

using namespace std::rel_ops;

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
        float this_balance = this->balance - this->cc_due;
        float other_balance = other.balance - other.cc_due;

        return this_balance < other_balance;
    }

    bool operator<(double other) const
    {
        float this_balance = this->balance - this->cc_due;

        return this_balance < other;
    };

    bool operator==(const BankAccount &other) const
    {
        float this_balance = this->balance - this->cc_due;
        float other_balance = other.balance - other.cc_due;

        return std::fabs(this_balance - other_balance) < 0.00001;
    }

    bool operator==(double other) const
    {
        float this_balance = this->balance - this->cc_due;

        return std::fabs(this_balance - other) < 0.001;
    }
};