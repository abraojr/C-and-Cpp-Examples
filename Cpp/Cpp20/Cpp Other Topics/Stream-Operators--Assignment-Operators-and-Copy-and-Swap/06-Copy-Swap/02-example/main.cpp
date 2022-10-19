#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount troy_account("Troy", 6543.33f);

    troy_account = troy_account;

    cout << "------Original------" << endl;
    cout << troy_account;

    return 0;
}

/* OUTPUT
    Contructing card: Visa, limit: 1000
    Contructing account: Troy, balance: 6543.33
    Assignment operator=() invoked
    Copy contructing account: Troy, balance: 6543.33
    Destructing card: Visa, limit: 1000
    Destructing: Troy ,balance: 6543.33
    ------Original------

    *****************************
    Name: Troy , balance: 6543.33
    Credit card name: Visa , limit: 1000

    Address of CreditCard variable: 0x505470
    *****************************

    Destructing card: Visa, limit: 1000
    Destructing: Troy ,balance: 6543.33
*/