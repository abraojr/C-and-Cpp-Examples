#include <iostream>
#include <algorithm>
#include <vector>

using std::boolalpha;
using std::cout;
using std::includes;
using std::sort;
using std::vector;

int main()
{
    vector<int> v1 = {2, 3, 5, 7, 11, 13, 17, 19};
    vector<int> v2 = {5, 7, 11};

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    bool does_include = includes(v1.begin(), v1.end(), v2.begin(), v2.end());
    cout << boolalpha << does_include << "\n";

    return 0;
}

/*OUTPUT
    true
*/