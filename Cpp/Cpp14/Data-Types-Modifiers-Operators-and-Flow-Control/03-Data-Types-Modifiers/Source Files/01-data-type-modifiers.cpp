#include <iostream>

using std::cout;

// common modifiers: signed, unsigned, short, long, long long

int main()
{
    // character type modifications
    char c = 'a';
    unsigned char uc = 'a' + 128;
    signed char sc = 'a' + 128;

    cout << c << ", " << (int)uc << ", " << (int)sc << "\n";
    cout << "sizeof char: " << sizeof c << "\n";

    // integer
    int i;
    short int si;
    short s; // implies 'short int'
    long int li;
    unsigned long long int ulli;

    cout << "sizeof int: " << sizeof i << "\n";
    cout << "sizeof short int: " << sizeof si << "\n";
    cout << "sizeof short: " << sizeof s << "\n";
    cout << "sizeof long int: " << sizeof li << "\n";
    cout << "sizeof long long int: " << sizeof ulli << "\n";

    // double
    double d;
    long double ld;
    // long long double lld; //not an option for double

    cout << "sizeof double: " << sizeof d << "\n";
    cout << "sizeof long double: " << sizeof ld << "\n";

    return 0;
}

/* OUTPUT
    a, 225, -31
    sizeof char: 1
    sizeof int: 4
    sizeof short int: 2
    sizeof short: 2
    sizeof long int: 8
    sizeof long long int: 8
    sizeof double: 8
    sizeof long double: 16
*/