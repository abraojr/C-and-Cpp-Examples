#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int balance = 1000;
    int withdrawal = 200;
    int final_balance = balance - withdrawal;

    cout << "My current account balance is : $" << balance << endl;
    cout << "I need to withdraw : $" << withdrawal << endl;
    cout << "My final account balance is : $" << final_balance << endl;

    return 0;
}

/* OUTPUT
    My current account balance is : $1000
    I need to withdraw : $200
    My final account balance is : $800
*/