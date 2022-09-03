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

    int x, y;

    cout << "Please enter the first element to search for: ";
    cin >> x;

    cout << "Please enter the second element to search for: ";
    cin >> y;

    auto x_found = (find(int_vector.begin(), int_vector.end(), x) != int_vector.end());
    auto y_found = (find(int_vector.begin(), int_vector.end(), y) != int_vector.end());

    if (x_found || y_found)
    {
        cout << "At least one of the elements was found in the vector" << endl;
    }

    if (x_found && y_found)
    {
        cout << "Both elements were found in the vector!" << endl;
    }

    if (!(x_found || y_found))
    {
        cout << "Neither element was found in the vector!" << endl;
    }

    return 0;
}

/* OUTPUT
    ## test 1 ##
    Please enter the first element to search for:
    7
    Please enter the second element to search for:
    17
    At least one of the elements was found in the vector
    Both elements were found in the vector!

    ## test 2 ##
    Please enter the first element to search for:
    7
    Please enter the second element to search for:
    22
    At least one of the elements was found in the vector

    ## test 3 ##
    Please enter the first element to search for:
    57
    Please enter the second element to search for:
    1
    Neither element was found in the vector!
*/