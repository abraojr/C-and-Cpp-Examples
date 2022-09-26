#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount lily_account("Lily", 13466.11f);

    return 0;
}

/* OUTPUT
    Constructing card: Visa limit: 1000
    Constructing account: Lily balance: 13466.1
    Destructing card: Visa limit: 1000
    Destructing account: Lily balance: 13466.1
*/