#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

const string &get_larger_string(const string &first, const string &second);

int main()
{
    const string &larger_string = get_larger_string("Smaller length string", "Much larger length string");

    cout << larger_string << endl;

    return 0;
}

const string &get_larger_string(const string &first, const string &second)
{
    return first.length() > second.length() ? first : second;
}

/* OUTPUT
    Much larger length string
*/