#include <iostream>

using std::cout;
using std::endl;
using std::int16_t;
using std::int32_t;
using std::int64_t;
using std::int8_t;

int main()
{
    cout << "Int sizes can be enforced by using fixed width in types" << endl;
    cout << "8-bit: " << sizeof(int8_t) << " byte." << endl;
    cout << "16-bit: " << sizeof(int16_t) << " bytes." << endl;
    cout << "32-bit: " << sizeof(int32_t) << " bytes." << endl;
    cout << "64-bit: " << sizeof(int64_t) << " bytes." << endl;

    return 0;
}

/* OUTPUT
    Int sizes can be enforced by using fixed width in types
    8-bit: 1 byte.
    16-bit: 2 bytes.
    32-bit: 4 bytes.
    64-bit: 8 bytes.
*/