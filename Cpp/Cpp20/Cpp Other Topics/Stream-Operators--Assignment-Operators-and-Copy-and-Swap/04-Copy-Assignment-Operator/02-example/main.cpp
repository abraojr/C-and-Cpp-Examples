#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount troy_account("Troy", 6543.33f);
    BankAccount troy_account_duplicate;

    troy_account_duplicate = troy_account;
    troy_account_duplicate.buy_on_credit(1000);

    cout << "------Troy Account (Original values)------" << endl;
    cout << troy_account;

    cout << "------Troy Duplicate (Updated values)------" << endl;
    cout << troy_account_duplicate;

    return 0;
}

/* OUTPUT
    ------Troy Account (Original values)------
    Name: Troy , balance: 6543.33, credit card due: 0
    ------Troy Duplicate (Updated values)------
    Name: Troy , balance: 6543.33, credit card due: 1000
    Destructing: Troy ,balance: 6543.33 ,cc due: 1000
    Destructing: Troy ,balance: 6543.33 ,cc due: 0
*/