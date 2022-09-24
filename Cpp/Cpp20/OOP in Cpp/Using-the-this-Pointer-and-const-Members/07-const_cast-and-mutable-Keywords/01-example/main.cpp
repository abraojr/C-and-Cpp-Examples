#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    const BankAccount harry_account("Harry", 7345.33f);

    BankAccount &harry_ref = const_cast<BankAccount &>(harry_account);

    harry_ref.set_balance(100);
    harry_ref.set_name("Harry Smith");

    cout << "----------------- const object updated using const_cast -----------------" << endl;
    cout << harry_account.get_name() << endl;
    cout << harry_account.get_balance() << endl;

    return 0;
}

/* OUTPUT
    ----------------- const object updated using const_cast -----------------
    Harry Smith
    100
*/