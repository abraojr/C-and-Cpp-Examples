#include <string>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using std::map;
using std::multimap;
using std::multiset;
using std::set;
using std::string;
using std::unordered_map;
using std::unordered_multimap;
using std::unordered_multiset;
using std::unordered_set;

int main()
{
    // ordered associative containers
    set<int> s;
    multiset<int> ms;

    map<string, int> m;
    multimap<string, int> mm;

    // unordered associative containers
    unordered_set<string> us;
    unordered_multiset<string> ums;
    unordered_map<string, string> um;
    unordered_multimap<string, string> umm;

    return 0;
}