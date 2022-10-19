#pragma once
#include <string>
#include <iostream>

#include "CreditCard.h"

class BankAccount
{
private:
    std::string name;
    float balance;
    CreditCard *credit_card;

public:
    BankAccount() = default;

    BankAccount(std::string name, float balance);

    std::string get_name() const
    {
        return name;
    }

    float get_balance() const
    {
        return balance;
    }

    BankAccount &operator=(const BankAccount &rhs)
    {
        std::cout << "Assignment operator=() invoked" << std::endl;

        delete credit_card;
        credit_card = nullptr;

        this->name = rhs.name;
        this->balance = rhs.balance;

        credit_card = new CreditCard(*(rhs.credit_card));

        return *this;
    }

    friend std::ostream &operator<<(std::ostream &stream, const BankAccount &bank_account);

    ~BankAccount();
};

inline std::ostream &operator<<(std::ostream &stream, const BankAccount &bank_account)
{
    std::cout << std::endl
              << "*****************************" << std::endl;
    stream << "Name: " << bank_account.get_name()
           << " , balance: " << bank_account.get_balance() << std::endl;

    stream << *(bank_account.credit_card) << std::endl;

    stream << "Address of CreditCard variable: "
           << bank_account.credit_card << std::endl;
    std::cout << "*****************************" << std::endl << std::endl;

    return stream;
}
