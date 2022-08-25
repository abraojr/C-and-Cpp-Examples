#include <iostream>
#include <deque>
#include <algorithm>

using std::cout;
using std::deque;
using std::sort;

int main()
{
    deque<int> v = {5, 3, 1, 4, 2};

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