#pragma once
#include <string>
#include <iostream>

class BankAccount
{
private:
    std::string name;
    float balance;
    float cc_due;

public:
    BankAccount() = default;

    BankAccount(std::string name, float balance);

    std::string get_name() const
    {
        return name;
    }

    bool buy_on_credit(float amount);

    bool pay_off_credit();

    float get_balance() const
    {
        return balance;
    }

    float get_cc_due() const
    {
        return cc_due;
    }

    BankAccount &operator=(const BankAccount &rhs)
    {
        std::cout << "Assignment operator=() invoked" << std::endl;

        this->name = rhs.name;
        this->balance = rhs.balance;
        this->cc_due = rhs.cc_due;

        return *this;
    }

    ~BankAccount();
};

inline std::ostream &operator<<(std::ostream &stream, const BankAccount &bank_account)
{
    stream << "Name: " << bank_account.get_name()
           << " , balance: " << bank_account.get_balance()
           << ", credit card due: " << bank_account.get_cc_due() << std::endl;

    return stream;
}
