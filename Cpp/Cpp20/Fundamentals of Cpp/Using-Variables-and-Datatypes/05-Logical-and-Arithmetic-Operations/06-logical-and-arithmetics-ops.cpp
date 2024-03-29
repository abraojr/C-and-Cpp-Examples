#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int apples_with_johnny = 6;
    cout << "prefix decrement: " << --apples_with_johnny << endl;
    cout << "Johnny now has: " << apples_with_johnny << " apples." << '\n';

    int apples_with_stevie = 12;
    cout << "postfix decrement: " << apples_with_stevie-- << endl;
    cout << "Stevie now has: " << apples_with_stevie << " apples." << endl;

    return 0;
}

/* OUTPUT
    prefix decrement: 5
    Johnny now has: 5 apples.
    postfix decrement: 12
    Stevie now has: 11 apples.
*/