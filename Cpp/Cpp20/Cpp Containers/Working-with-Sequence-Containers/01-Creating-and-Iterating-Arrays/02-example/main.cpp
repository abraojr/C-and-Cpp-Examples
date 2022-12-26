#include <array>
#include <iostream>

using std::array;
using std::cout;
using std::endl;
using std::string;

int main()
{
    array<string, 8> names_array = {"Liz", "Lucy", "Sam", "Fred", "Ophelia"};

    cout << "---------Size---------" << endl;

    cout << "Size of array: " << names_array.size() << endl;
    cout << "Maximum size of array: " << names_array.max_size() << endl;
    cout << "Is array empty: " << std::boolalpha << names_array.empty() << endl;

    cout << "---------Contents---------" << endl;

    for (auto &name : names_array)
    {
        cout << name << endl;
    }

    cout << "---------Random Access with operator[]---------" << endl;

    cout << "Element at index 0: " << names_array[0] << endl;
    cout << "Element at index 6: " << names_array[6] << endl;
    cout << "Element at index 13: " << names_array[13] << endl;

    cout << "---------Random Access with at()---------" << endl;

    cout << "Element at index 1: " << names_array.at(1) << endl;
    cout << "Element at index 7: " << names_array.at(7) << endl;
    cout << "Element at index 14: " << names_array.at(14) << endl;

    return 0;
}

/* OUTPUT
    ---------Size---------
    Size of array: 8
    Maximum size of array: 8
    Is array empty: false
    ---------Contents---------
    Liz
    Lucy
    Sam
    Fred
    Ophelia



    ---------Random Access with operator[]---------
    Element at index 0: Liz
    Element at index 6:
    Element at index 13:
    ---------Random Access with at()---------
    Element at index 1: Lucy
    Element at index 7:
    terminate called after throwing an instance of 'std::out_of_range'
    what():  array::at: __n (which is 14) >= _Nm (which is 8)
*/