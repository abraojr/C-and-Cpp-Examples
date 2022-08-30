#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // simple assignment
    int apples = 10;
    cout << "Originally I had: " << apples << " apples." << endl;

    // addition assignment
    apples += 5;
    cout << "After adding 5 apples I have now got: " << apples << " apples." << endl;

    // subtraction assignment
    apples -= 2;
    cout << "After eating 2 apples I have now got: " << apples << " apples." << endl;

    // multiplication assignment
    apples *= 3;
    cout << "After tripling my apples I have now got: " << apples << " apples." << endl;

    // division assignment
    apples /= 5;
    cout << "After splitting the apples amongst 5 friends each friend has: " << apples << " apples." << endl;

    // modulus assignment
    apples %= 4;
    cout << "After splitting the apples amongst 4 friends and keeping the rest I have: " << apples << " apples." << endl;

    return 0;
}

/* OUTPUT
    Originally I had: 10 apples.
    After adding 5 apples I have now got: 15 apples.
    After eating 2 apples I have now got: 13 apples.
    After tripling my apples I have now got: 39 apples.
    After splitting the apples amongst 5 friends each friend has: 7 apples.
    After splitting the apples amongst 4 friends and keeping the rest I have: 3 apples.
*/