#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>
#include <string>

using std::array;
using std::deque;
using std::forward_list;
using std::list;
using std::string;
using std::vector;

int main()
{
    // sequential containers
    vector<string> v;
    list<int> l;
    forward_list<string> fl;
    deque<double> deq;

    // partial sequence container
    array<int, 10> a;

    return 0;
}