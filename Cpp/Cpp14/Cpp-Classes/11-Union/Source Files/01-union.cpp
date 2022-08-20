#include <iostream>

using std::cout;
using std::hex;

union IntBytes
{
    unsigned int i;
    unsigned char b[4];
};

int main()
{
    IntBytes ib;
    ib.i = 65000;
    cout << ib.i << "\n";
    cout << hex << ib.i << "\n";
    cout << (int)ib.b[3] << ", " << (int)ib.b[2] << ", " << (int)ib.b[1] << ", " << (int)ib.b[0] << "\n";

    return 0;
}

/* OUTPUT
    65000
    fde8
    0, 0, fd, e8
*/