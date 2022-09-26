#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount lily_account("Lily", 13466.11f);

    BankAccount lily_account_copy{lily_account};
    lily_account_copy.set_balance(20000);
    lily_account_copy.set_credit_limit(5000);

    cout << "------------------Original------------------" << endl;
    lily_account.display();

    cout << "------------------Copy------------------" << endl;
    lily_account_copy.display();

    cout << "------------------End of main() destructors will be called------------------" << endl;

    return 0;
}

/* OUTPUT
    Constructing card: Visa limit: 1000
    Constructing account: Lily balance: 13466.1
    Copy constructing account: Lily balance: 13466.1
    ------------------Original------------------
    Name: Lily balance: 13466.1
    Card name: Visa limit: 1000
    Address of CreditCard variable: 0x55bb0545bc40
    ------------------Copy------------------
    Name: Lily balance: 20000
    Card name: Visa limit: 5000
    Address of CreditCard variable: 0x55bb0545bc80
    ------------------End of main() destructors will be called------------------
    Destructing card: Visa limit: 5000
    Destructing account: Lily balance: 20000
    Destructing card: Visa limit: 1000
    Destructing account: Lily balance: 13466.1
*/