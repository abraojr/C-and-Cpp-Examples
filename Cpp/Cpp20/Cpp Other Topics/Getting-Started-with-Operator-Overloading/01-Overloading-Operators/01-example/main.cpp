#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount greg_account(111, "Greg", 4567.23f);
    BankAccount peter_account(444, "Peter", 11111.34f);

    greg_account.show();
    peter_account.show();

    if (greg_account.get_balance() > peter_account.get_balance())
    {
        cout << "Greg's balance is greater than Peter's balance" << endl;
    }

    if (greg_account.get_balance() < peter_account.get_balance())
    {
        cout << "Greg's balance is less than Peter's balance" << endl;
    }

    return 0;
}

/* OUTPUT
    ----------------Greg----------------
    Balance: 4567.23 Credit card amount due: 0

    ----------------Peter----------------
    Balance: 11111.3 Credit card amount due: 0

    Greg's balance is less than Peter's balance
*/