#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount carrie_account(1001, "Carrie", 3333.34f);
    BankAccount troy_account(1002, "Troy", 6543.33f);

    troy_account.buy_on_credit(4043);

    carrie_account.show();
    troy_account.show();

    if (troy_account < carrie_account)
    {
        cout << "Troy's balance is less than Carrie's balance" << endl;
    }

    cout << "----------------------------" << endl;

    if (troy_account < 7999.99)
    {
        cout << "Troy's balance is less than $7999.99" << endl;
    }

    cout << "----------------------------" << endl;

    if (carrie_account < 10000)
    {
        cout << "Carrie's balance is less than $10000" << endl;
    }

    return 0;
}

/* OUTPUT
    ----------------Carrie----------------
    Balance: 3333.34 Credit card amount due: 0

    ----------------Troy----------------
    Balance: 6543.33 Credit card amount due: 4043

    Invoking bool operator<(const BankAccount &other) const
    Troy's balance is less than Carrie's balance
    ----------------------------
    Invoking bool operator<(double other)const
    Troy's balance is less than $7999.99
    ----------------------------
    Invoking bool operator<(double other)const
    Carrie's balance is less than $10000
*/