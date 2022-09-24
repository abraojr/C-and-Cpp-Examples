#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    const BankAccount harry_account("Harry", 7345.33f);

    cout << "----------------- checking the balance -----------------" << endl;
    cout << harry_account.get_balance() << endl;
    cout << harry_account.get_balance() << endl;
    cout << harry_account.get_balance() << endl;

    return 0;
}

/* OUTPUT
    ----------------- checking the balance -----------------
    You have checked your balance 1 time(s) 7345.33
    You have checked your balance 2 time(s) 7345.33
    You have checked your balance 3 time(s) 7345.33
*/