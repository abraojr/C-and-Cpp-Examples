#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << "A familiar for loop" << endl;
    for (float i = 1.1; i < 10; i = i + 1.1)
    {
        cout << "i = " << i << endl;
    }
}

/* OUTPUT
    A familiar for loop
    i = 1.1
    i = 2.2
    i = 3.3
    i = 4.4
    i = 5.5
    i = 6.6
    i = 7.7
    i = 8.8
    i = 9.9
*/