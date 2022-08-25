#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>

using std::cout;
using std::greater;
using std::less;
using std::sort;
using std::string;
using std::vector;

int main()
{
    vector<string> vs = {"i", "l", "f", "g", "k", "a", "e", "h", "d", "b", "j", "c"};

    // alphabetical order sort
    sort(vs.begin(), vs.end(), less<string>());
    for (const auto &s : vs)
    {
        cout << s << " ";
    }
    cout << "\n\n";

    // numerical from greatest to least
    vector<int> v = {8, 3, 2, 4, 5, 6, 1, 7, 9, 10};
    sort(v.begin(), v.end(), greater<int>());
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n\n";

    // custom sort using lambda expression
    sort(v.begin(), v.end(), [](int a, int b)
         { return (a % 2) > (b % 2); });
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}

/* OUTPUT
    a b c d e f g h i j k l

    10 9 8 7 6 5 4 3 2 1

    9 7 5 3 1 10 8 6 4 2
*/