#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::find;
using std::vector;

int main()
{
    vector<int> int_vector;

    int_vector.push_back(34);
    int_vector.push_back(55);
    int_vector.push_back(17);
    int_vector.push_back(7);

    int x;

    cout << "Please enter element to search for: ";
    cin >> x;

    auto begin_itr = int_vector.begin();
    auto end_itr = int_vector.end();

    auto found_itr = find(begin_itr, end_itr, x);

    if (found_itr == end_itr)
    {
        cout << "The element was NOT found!" << endl;
    }
    else
    {
        cout << "The element was found!" << endl;
    }

    return 0;
}

/* OUTPUT
    ## test 1 ##
    Please enter element to search for:
    17
    The element was found!

    ## test 2 ##
    Please enter element to search for:
    25
    The element was NOT found!
*/