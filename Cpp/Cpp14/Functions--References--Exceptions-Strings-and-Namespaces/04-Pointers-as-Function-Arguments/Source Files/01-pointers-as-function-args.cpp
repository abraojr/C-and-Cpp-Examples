#include <iostream>

using std::cout;

void f(int a, int *b, int *&c)
{
    a = 100;
    *b = 200;
    c = b;
    b = &a;
}

int main()
{
    int i = 10, j = 20, k = 30;
    int *y, *w;
    y = &j;
    w = &k;

    // cout values and address
    cout << "i, j, k: " << i << ", " << j << ", " << k << "\n";
    cout << "*y, *w: " << *y << ", " << *w << "\n";
    cout << "y, w: " << y << ", " << w << "\n";

    f(i, y, w);

    // cout values and address
    cout << "i, j, k: " << i << ", " << j << ", " << k << "\n";
    cout << "*y, *w: " << *y << ", " << *w << "\n";
    cout << "y, w: " << y << ", " << w << "\n";

    return 0;
}

/* OUTPUT
    i, j, k: 10, 20, 30
    *y, *w: 20, 30
    y, w: 0x7ffe8d77f10c, 0x7ffe8d77f110
    i, j, k: 10, 200, 30
    *y, *w: 200, 200
    y, w: 0x7ffe8d77f10c, 0x7ffe8d77f10c
*/