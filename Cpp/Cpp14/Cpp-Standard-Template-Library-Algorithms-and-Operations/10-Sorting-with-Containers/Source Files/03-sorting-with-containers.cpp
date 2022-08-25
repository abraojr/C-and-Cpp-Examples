#include <iostream>
#include <algorithm>

using std::begin;
using std::cout;
using std::end;
using std::sort;

int main()
{
    int v[5] = {5, 3, 1, 4, 2};

    sort(begin(v), end(v));
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}

/* OUTPUT
    1 2 3 4 5
*/