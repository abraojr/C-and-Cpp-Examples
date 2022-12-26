#include <iostream>
#include <set>

using std::cout;
using std::endl;
using std::greater;
using std::set;

void print_set(const set<float, greater<float>> &lap_timings)
{
    for (auto &timing : lap_timings)
    {
        cout << timing << endl;
    }
}

int main()
{
    set<float, greater<float>> lap_timings{10.11, 12.34, 9.99, 13.22, 14.21};

    cout << endl << "---------------Ordered set---------------" << endl;
    print_set(lap_timings);

    return 0;
}

/* OUTPUT
    ---------------Ordered set---------------
    14.21
    13.22
    12.34
    10.11
    9.99
*/