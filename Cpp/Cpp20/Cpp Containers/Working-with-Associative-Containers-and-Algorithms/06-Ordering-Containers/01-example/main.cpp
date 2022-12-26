#include <iostream>
#include <set>

using std::cout;
using std::endl;
using std::set;

void print_set(const set<float> &lap_timings)
{
    for (auto &timing : lap_timings)
    {
        cout << timing << endl;
    }
}

int main()
{
    set<float> lap_timings{10.11, 12.34, 9.99, 13.22, 14.21};

    cout << endl << "---------------Ordered set---------------" << endl;
    print_set(lap_timings);

    return 0;
}

/* OUTPUT
    ---------------Ordered set---------------
    9.99
    10.11
    12.34
    13.22
    14.21
*/