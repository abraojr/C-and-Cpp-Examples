#include <iostream>

using std::cout;
using std::endl;

int main()
{
    bool is_valid = true;

    cout << "Is this valid?: " << is_valid << endl;

    is_valid = false;

    cout << "Is this valid?: " << is_valid << endl;

    return 0;
}

/* OUTPUT
    Is this valid?: 1
    Is this valid?: 0
*/