#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount greg_account(111, "Greg", 11111.333334f);
    BankAccount peter_account(444, "Peter", 11111.33334f);

    peter_account.buy_on_credit(1000);

    greg_account.show();
    peter_account.show();

    if (greg_account.compare(peter_account) > 0)
    {
        cout << "Greg's balance is greater than Peter's balance" << endl;
    }

    if (greg_account.compare(peter_account) < 0)
    {
        cout << "Greg's balance is less than Peter's balance" << endl;
    }

    if (greg_account.compare(peter_account) == 0)
    {
        cout << "Greg's balance is equal to Peter's balance" << endl;
    }

    return 0;
}

/* OUTPUT
    ----------------Greg----------------
    Balance: 11111.3 Credit card amount due: 0

    ----------------Peter----------------
    Balance: 11111.3 Credit card amount due: 1000

    Greg's balance is greater than Peter's balance
*/