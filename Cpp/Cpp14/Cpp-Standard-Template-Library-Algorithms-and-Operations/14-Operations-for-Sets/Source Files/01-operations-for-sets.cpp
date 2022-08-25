#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::set_difference;
using std::set_intersection;
using std::set_symmetric_difference;
using std::set_union;
using std::vector;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> w = {5, 6, 7, 8, 9};
    vector<int> t(v.size() + w.size());

    auto p = set_union(v.begin(), v.end(), w.begin(), w.end(), t.begin());
    cout << "set union: ";
    for (auto itr = t.begin(); itr != p; ++itr)
    {
        cout << *itr << " ";
    }
    cout << "\n";

    cout << "set intersection: ";
    p = set_intersection(v.begin(), v.end(), w.begin(), w.end(), t.begin());
    for (auto itr = t.begin(); itr != p; ++itr)
    {
        cout << *itr << " ";
    }
    cout << "\n";

    cout << "set differnce: ";
    p = set_difference(v.begin(), v.end(), w.begin(), w.end(), t.begin());
    for (auto itr = t.begin(); itr != p; ++itr)
    {
        cout << *itr << " ";
    }
    cout << "\n";

    cout << "set symmetric differnce: ";
    p = set_symmetric_difference(v.begin(), v.end(), w.begin(), w.end(), t.begin());
    for (auto itr = t.begin(); itr != p; ++itr)
    {
        cout << *itr << " ";
    }

    return 0;
}

/* OUTPUT
    set union: 1 2 3 4 5 6 7 8 9
    set intersection: 5
    set differnce: 1 2 3 4
    set symmetric differnce: 1 2 3 4 6 7 8 9
*/