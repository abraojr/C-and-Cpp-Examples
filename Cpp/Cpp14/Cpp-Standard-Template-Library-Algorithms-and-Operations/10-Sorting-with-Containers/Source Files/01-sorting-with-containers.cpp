#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::sort;
using std::vector;

int main()
{
    vector<int> v = {5, 3, 1, 4, 2};

    sort(v.begin(), v.end());
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