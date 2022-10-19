#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount troy_account("Troy", 6543.33f);
    BankAccount troy_account_duplicate;

    cout << "------Troy Duplicate (Original values)------" << endl;
    cout << troy_account_duplicate;

    troy_account_duplicate = troy_account;

    cout << "------Troy Account (Original values)------" << endl;
    cout << troy_account;

    cout << "------Troy Duplicate (Updated values)------" << endl;
    cout << troy_account_duplicate;

    return 0;
}

/* OUTPUT
    ------Troy Duplicate (Original values)------
    Name:  , balance: -2.94936e-05, credit card due: 4.59149e-41
    ------Troy Account (Original values)------
    Name: Troy , balance: 6543.33, credit card due: 0
    ------Troy Duplicate (Updated values)------
    Name: Troy , balance: 6543.33, credit card due: 0
    Destructing: Troy ,balance: 6543.33 ,cc due: 0
    Destructing: Troy ,balance: 6543.33 ,cc due: 0
*/