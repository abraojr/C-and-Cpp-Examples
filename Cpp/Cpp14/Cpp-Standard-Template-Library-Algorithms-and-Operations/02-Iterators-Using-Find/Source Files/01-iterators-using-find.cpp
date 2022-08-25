#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::find;
using std::vector;

int main()
{
    vector<int> v = {42, 128, 995, 443, 9000, 3, 4, 5};

    // Think: half-open interval [begin, end)
    // A bounded sequence by `end`
    auto itr = find(v.begin(), v.end(), 443);

    while (itr != v.end())
    {
        cout << *itr << " ";
        ++itr;
    }
    cout << "\n";

    return 0;
}

/* OUTPUT
    443 9000 3 4 5
*/