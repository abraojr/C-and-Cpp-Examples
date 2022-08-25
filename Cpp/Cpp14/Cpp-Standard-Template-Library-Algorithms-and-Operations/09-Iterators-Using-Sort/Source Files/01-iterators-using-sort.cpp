#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::sort;
using std::vector;

int main()
{
    vector<int> v = {5, 4, 6, 10, 1, 7, 9, 8, 15, 11, 3, 2};
    cout << "Initial contents of v: \n";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    auto itr_start = find(v.begin(), v.end(), 6);
    auto itr_upper = find(itr_start + 1, v.end(), 8);

    // sort v on [itr_start, itr_upper]
    //  ascending
    sort(itr_start, itr_upper);
    cout << "Final contents of v: \n";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}

/* OUTPUT
    Initial contents of v:
    5 4 6 10 1 7 9 8 15 11 3 2

    Final contents of v:
    5 4 1 6 7 9 10 8 15 11 3 2
*/