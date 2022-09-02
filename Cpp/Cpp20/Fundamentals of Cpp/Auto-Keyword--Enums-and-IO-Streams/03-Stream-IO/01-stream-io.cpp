#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num_a, num_b;

    cout << "Please enter the first integer: ";
    cin >> num_a;

    cout << "Please enter the second integer: ";
    cin >> num_b;

    cout << num_a << " + " << num_b << " = " << num_a + num_b << endl;
    cout << num_a << " - " << num_b << " = " << num_a - num_b << endl;
}

/* OUTPUT
    Please enter the first integer:
    10
    Please enter the second integer:
    25
    10 + 25 = 35
    10 - 25 = -15
*/