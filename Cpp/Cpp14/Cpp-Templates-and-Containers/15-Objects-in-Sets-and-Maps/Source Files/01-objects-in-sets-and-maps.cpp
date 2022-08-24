#include <iostream>
#include <string>
#include <set>
#include <map>

using std::cout;
using std::map;
using std::set;
using std::string;

class Record
{
public:
    int rank;
    string value;

    Record(int rank, string value) : rank(rank), value(value) {}

    bool operator<(const Record &r) const
    {
        return rank < r.rank;
    }
};

int main()
{
    set<Record> s;
    map<Record, string> m;

    Record r1(3, "test");
    Record r2(1, "ok");

    m[r1] = "anoter string";

    s.insert(r1);
    s.insert(r2);

    for (const auto &rec : s)
    {
        cout << rec.rank << ": " << rec.value << "\n";
    }

    return 0;
}

/* OUTPUT
    1: ok
    3: test
*/