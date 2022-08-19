#include <iostream>

using std::cout;

int main()
{
    int i = 10, j = 100;
    int *p = &i;
    int &r = i;

    // cout values and pointers
    cout << "i, *p, r: " << i << ", " << *p << ", " << r << "\n";
    cout << "p, &r: " << p << ", " << &r << "\n";

    // modify i;
    i = 20;

    // cout values and pointers
    cout << "i, *p, r: " << i << ", " << *p << ", " << r << "\n";
    cout << "p, &r: " << p << ", " << &r << "\n";

    // modify r;
    r = 30;

    // cout values and pointers
    cout << "i, *p, r: " << i << ", " << *p << ", " << r << "\n";
    cout << "p, &r: " << p << ", " << &r << "\n";

    // modify p;
    p = &j;

    // cout values and pointers
    cout << "i, *p, r: " << i << ", " << *p << ", " << r << "\n";
    cout << "p, &r: " << p << ", " << &r << "\n";

    return 0;
}

/* OUTPUT
    i, *p, r: 10, 10, 10
    p, &r: 0x7ffd7676c890, 0x7ffd7676c890
    i, *p, r: 20, 20, 20
    p, &r: 0x7ffd7676c890, 0x7ffd7676c890
    i, *p, r: 30, 30, 30
    p, &r: 0x7ffd7676c890, 0x7ffd7676c890
    i, *p, r: 30, 100, 30
    p, &r: 0x7ffd7676c894, 0x7ffd7676c890
*/