#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int apples_with_johnny = 6;
    cout << "prefix increment: " << ++apples_with_johnny << endl;
    cout << "Johnny now has: " << apples_with_johnny << " apples." << '\n';

    int apples_with_stevie = 12;
    cout << "postfix increment: " << apples_with_stevie++ << endl;
    cout << "Stevie now has: " << apples_with_stevie << " apples." << endl;

    return 0;
}

/* OUTPUT
    prefix increment: 7
    Johnny now has: 7 apples.
    postfix increment: 12
    Stevie now has: 13 apples.
*/