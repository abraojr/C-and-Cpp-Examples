#include <iostream>
#include <vector>
#include <bitset>

using std::bitset;
using std::cout;
using std::vector;

int main()
{
    // do { ... } while(expression-condition)

    // simple do-while
    int i = 10390;
    do
    {
        cout << bitset<16>(i) << "\n";
        i >>= 1;
    } while (i > 0);
    cout << "\n";

    // do-while with an iterator
    vector<int> v = {55, 3, 1, 0, 0, 3, 343};
    auto itr = v.begin();
    do
    {
        cout << *itr << " ";
        ++itr;
    } while (itr != v.end());

    return 0;
}

/* OUTPUT
    0010100010010110
    0001010001001011
    0000101000100101
    0000010100010010
    0000001010001001
    0000000101000100
    0000000010100010
    0000000001010001
    0000000000101000
    0000000000010100
    0000000000001010
    0000000000000101
    0000000000000010
    0000000000000001

    55 3 1 0 0 3 343
*/