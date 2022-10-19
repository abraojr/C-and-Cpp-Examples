#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount troy_account("Troy", 6543.33f);
    BankAccount troy_account_copy_1;
    BankAccount troy_account_copy_2;

    troy_account_copy_2 = troy_account_copy_1 = troy_account;
    troy_account.buy_on_credit(1000);

    cout << "------Troy Account------" << endl;
    cout << troy_account;

    cout << "------Troy Account Copy 1------" << endl;
    cout << troy_account_copy_1;

    cout << "------Troy Account Copy 2------" << endl;
    cout << troy_account_copy_2;

    return 0;
}

/* OUTPUT
    ------Troy Account------
    Name: Troy , balance: 6543.33, credit card due: 1000
    ------Troy Account Copy 1------
    Name: Troy , balance: 6543.33, credit card due: 0
    ------Troy Account Copy 2------
    Name: Troy , balance: 6543.33, credit card due: 0
    Destructing: Troy ,balance: 6543.33 ,cc due: 0
    Destructing: Troy ,balance: 6543.33 ,cc due: 0
    Destructing: Troy ,balance: 6543.33 ,cc due: 1000
*/