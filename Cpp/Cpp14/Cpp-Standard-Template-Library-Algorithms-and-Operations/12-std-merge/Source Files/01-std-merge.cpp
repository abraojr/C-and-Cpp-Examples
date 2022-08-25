#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using std::cout;
using std::merge;
using std::string;
using std::vector;

int main()
{
    vector<string> v1 = {"Bob", "Steve", "Joe", "Alex", "William"};
    vector<string> v2 = {"Jane", "Sally", "Allison", "Pamela", "Emily"};

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    vector<string> v3(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    for (const string &s : v3)
    {
        cout << s << " ";
    }

    return 0;
}

/*OUTPUT
    Alex Allison Bob Emily Jane Joe Pamela Sally Steve William
*/