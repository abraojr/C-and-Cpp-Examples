#include <iostream>
#include <string>
#include <list>
#include <deque>
#include <iterator>

using std::back_inserter;
using std::cout;
using std::deque;
using std::front_inserter;
using std::list;
using std::make_move_iterator;
using std::string;

int main()
{
    list<string> ls = {"one", "elbow", "blue", "toad", "galaxy", "socks"};

    // copy list of strings to a deque of strings
    deque<string> ds;
    copy(ls.begin(), ls.end(), back_inserter(ds));

    // move deque of strings to another list of strings
    list<string> ls2(make_move_iterator(ds.begin()), make_move_iterator(ds.end()));

    cout << "Contents of 'ls': \n";
    for (const auto &str : ls)
    {
        cout << str << " ";
    }
    cout << "\n\n";

    cout << "Contents of 'ds': \n";
    for (const auto &str : ds)
    {
        cout << str << " ";
    }
    cout << "\n\n";

    cout << "Contents of 'ls2': \n";
    for (const auto &str : ls2)
    {
        cout << str << " ";
    }
    cout << "\n\n";

    return 0;
}

/* OUTPUT
    Contents of 'ls':
    one elbow blue toad galaxy socks

    Contents of 'ds':


    Contents of 'ls2':
    one elbow blue toad galaxy socks
*/