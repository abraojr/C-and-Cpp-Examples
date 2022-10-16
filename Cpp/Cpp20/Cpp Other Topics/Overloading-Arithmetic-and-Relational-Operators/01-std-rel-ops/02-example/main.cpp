#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount carrie_account(1001, "Carrie", 3333.34f);
    BankAccount troy_account(1002, "Troy", 3433.340001f);

    troy_account.buy_on_credit(100);

    carrie_account.show();
    troy_account.show();

    if (troy_account == carrie_account)
    {
        cout << "Troy's balance is equal to Carrie's balance" << endl;
    }

    cout << "----------------------------" << endl;

    if (troy_account == 3333.34)
    {
        cout << "Troy's balance is equal to $3333.34" << endl;
    }

    cout << "----------------------------" << endl;

    if (3333.34 == troy_account)
    {
        cout << "$3333.34 is equal to Troy's balance" << endl;
    }

    return 0;
}

/* OUTPUT
    ----------------Carrie----------------
    Balance: 3333.34 Credit card amount due: 0

    ----------------Troy----------------
    Balance: 3433.34 Credit card amount due: 100

    Troy's balance is equal to Carrie's balance
    ----------------------------
    Troy's balance is equal to $3333.34
    ----------------------------
*/