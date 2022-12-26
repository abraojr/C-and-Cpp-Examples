#include <array>
#include <iostream>

using std::array;
using std::cout;
using std::endl;
using std::string;

int main()
{
    array<int, 5> int_arr;

    int_arr.fill(1);

    cout << "---------Contents---------" << endl;

    for (auto &integer : int_arr)
    {
        cout << integer << endl;
    }

    int_arr[3] = 3;
    int_arr.at(4) = 4;

    cout << "---------Updated Contents---------" << endl;

    for (auto &integer : int_arr)
    {
        cout << integer << endl;
    }

    cout << "---------Access front and back elements---------" << endl;

    cout << "Element at the front of the array: " << int_arr.front() << endl;
    cout << "Element at the back of the array: " << int_arr.back() << endl;

    return 0;
}

/* OUTPUT
    ---------Contents---------
    1
    1
    1
    1
    1
    ---------Updated Contents---------
    1
    1
    1
    3
    4
    ---------Access front and back elements---------
    Element at the front of the array: 1
    Element at the back of the array: 4
*/