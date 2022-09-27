#include <iostream>

#include "BankAccount.h"

using std::cout;
using std::endl;

int main()
{
    BankAccount lily_account("Lily", 1300.00f);

    lily_account.display_transaction_report();

    lily_account.withdraw(50);
    lily_account.withdraw(100);
    lily_account.deposit(3000);
    lily_account.buy_on_credit(800);
    lily_account.buy_on_credit(300);
    lily_account.pay_off_credit_card();

    lily_account.display_transaction_report();

    return 0;
}

/* OUTPUT
    ------------------------------Account Details------------------------------
    Name: Lily current balance: 1300
    Credit card name: Mastercard current limit: 1000
    ------------------------------Transactions------------------------------
    ------------------------------Account Details------------------------------
    Name: Lily current balance: 3350
    Credit card name: Mastercard current limit: 200
    ------------------------------Transactions------------------------------
    BT: New balance: 1250.000000 withdrew: 50.000000
    BT: New balance: 1150.000000 withdrew: 100.000000
    BT: New balance: 4150.000000 deposited: 3000.000000
    CCT: New limit: 200.000000 spent: 800.000000
    CCT: Insufficient limit: 200.000000 could not spend: 300.000000
    BT: New balance: 3350.000000 made credit card payment: 800.000000
*/