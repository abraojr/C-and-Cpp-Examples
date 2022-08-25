#include <iostream>
#include <algorithm>
#include <vector>

using std::any_of;
using std::begin;
using std::boolalpha;
using std::cout;
using std::end;
using std::vector;

/*
1. for_each

2. count, count_if

3. find, find_if, find_if_not, find_first_of, adjacent_find, find_end

4. equal, mismatch

5. search, search_n

6. all_of, any_of, none_of

*/

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    vector<int> v = {1, 2, 3};

    // iterators
    begin(a);
    end(a);
    v.begin();
    v.end();

    bool b = any_of(begin(a), end(a), [](int a)
                    { return a > 5; });
    cout << boolalpha << b << "\n";

    bool w = any_of(v.begin(), v.end(), [](int a)
                    { return a > 5; });
    cout << boolalpha << w << "\n";

    return 0;
}

/* OUTPUT
    true
    false
*/