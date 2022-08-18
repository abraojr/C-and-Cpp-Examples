#include <iostream>
#include <bitset>

using std::bitset;
using std::cout;

int main()
{
    // unary: <<, >>, ~
    unsigned char b = 0b00001001;
    cout << "b: " << bitset<8>(b) << "\n";
    cout << "b << 2:" << bitset<8>(b << 2) << "\n";
    cout << "b >> 1:" << bitset<8>(b >> 1) << "\n";
    cout << "~b:" << bitset<8>(~b) << "\n";
    cout << "\n";

    // binary: &, |, ^
    unsigned char c = 0b10101101;
    cout << "  " << bitset<8>(c) << "\n& 00000111\n -----------\n "
         << bitset<8>(c & 0b00000111) << "\n\n";

    cout << "  " << bitset<8>(c) << "\n| 11110000\n -----------\n "
         << bitset<8>(c | 0b11110000) << "\n\n";

    cout << "  " << bitset<8>(c) << "\n^ 11110000\n -----------\n "
         << bitset<8>(c ^ 0b11110000) << "\n";

    // precedence: ~, <<, >>, &, ^, |

    return 0;
}

/* OUTPUT
    b: 00001001
    b << 2:00100100
    b >> 1:00000100
    ~b:11110110

    10101101
    & 00000111
    -----------
    00000101

    10101101
    | 11110000
    -----------
    11111101

    10101101
    ^ 11110000
    -----------
    01011101
*/