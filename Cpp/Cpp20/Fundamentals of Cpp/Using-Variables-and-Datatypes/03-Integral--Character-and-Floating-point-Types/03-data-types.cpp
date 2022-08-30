#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "Size of float is " << sizeof(float) << " bytes." << endl;
    cout << "Size of double is " << sizeof(double) << " bytes." << endl;
    cout << "Size of long double is " << sizeof(long double) << " bytes." << endl;

    float balance = 1000.64F;
    double earths_gravity = 9.807;
    long double plancks_constant = 6.62607004e-34L;

    cout << endl << "Balance: " << balance << endl;
    cout << "Earth's gravity: " << earths_gravity << endl;
    cout << "Planck's constant: " << plancks_constant << endl;

    return 0;
}

/* OUTPUT
    Size of float is 4 bytes.
    Size of double is 8 bytes.
    Size of long double is 16 bytes.

    Balance: 1000.64
    Earth's gravity: 9.807
    Planck's constant: 6.62607e-34
*/