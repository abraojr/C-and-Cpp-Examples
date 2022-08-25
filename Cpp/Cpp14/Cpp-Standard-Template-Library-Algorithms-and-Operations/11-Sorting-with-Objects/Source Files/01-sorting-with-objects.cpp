#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using std::cout;
using std::sort;
using std::string;
using std::vector;

class Record
{
public:
    int id;
    string value;

    Record(int i, string s) : id(i), value(s) {}

    bool operator<(const Record &r) const
    {
        return id < r.id;
    }
};

int main()
{
    vector<Record> v;
    v.push_back(Record{5, "Five"});
    v.push_back(Record{1, "One"});
    v.push_back(Record{3, "Three"});
    v.push_back(Record{2, "Two"});
    v.push_back(Record{4, "Four"});

    cout << "Original order: \n";
    for (const Record &r : v)
    {
        cout << r.id << ", " << r.value << "\n";
    }
    cout << "\n";

    sort(v.begin(), v.end());
    cout << "Afer sorting: \n";
    for (const Record &r : v)
    {
        cout << r.id << ", " << r.value << "\n";
    }

    return 0;
}

/*OUTPUT
    Original order:
    5, Five
    1, One
    3, Three
    2, Two
    4, Four

    Afer sorting:
    1, One
    2, Two
    3, Three
    4, Four
    5, Five
*/