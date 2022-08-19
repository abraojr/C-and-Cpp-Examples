#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
    // informally
    // for(init; condition; increment){ ... }

    // basic for loop
    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    // multiple initializers
    for (int i = 0, j = 10; i < 10; i++, j--)
    {
        cout << i << " " << j << ", ";
    }
    cout << "\n\n";

    // range-based for over an array
    int a[] = {4, 3, 2, 1, 0, 5, 6, 7, 10, 9, 8};
    for (int i : a)
        cout << i << " ";
    cout << "\n\n";

    // container with an iterator
    vector<int> v = {10, 20, 30, 100, 60, 90, 80, 70, 50, 40};
    for (auto itr = v.begin(); itr != v.end(); ++itr)
    {
        cout << *itr << " ";
    }

    return 0;
}

/* OUTPUT

    0 1 2 3 4 5 6 7 8 9

    0 10, 1 9, 2 8, 3 7, 4 6, 5 5, 6 4, 7 3, 8 2, 9 1,

    4 3 2 1 0 5 6 7 10 9 8

    10 20 30 100 60 90 80 70 50 40
*/