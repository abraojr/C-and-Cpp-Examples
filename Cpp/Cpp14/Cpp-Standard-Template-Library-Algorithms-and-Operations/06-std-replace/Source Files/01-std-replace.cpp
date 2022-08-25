#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using std::cout;
using std::replace;
using std::string;
using std::vector;

int main()
{
    // 1. character replacement
    string s = "2022-01-01";

    replace(s.begin(), s.end(), '-', '/');
    cout << s << "\n";

    // 2. element replacement (vector)
    vector<int> v = {0, 1, 2, 3, 0, 844, 34, 0, 22, 11, 2, 0};
    replace(v.begin(), v.end(), 0, 1);
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n";

    // 3. replace_if using lambda expression
    replace_if(v.begin(), v.end(), [](int i){ return (i % 2) == 0; },-1);
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}

/* OUTPUT
    2022/01/01
    1 1 2 3 1 844 34 1 22 11 2 1 
    1 1 -1 3 1 -1 -1 1 -1 11 -1 1 
*/