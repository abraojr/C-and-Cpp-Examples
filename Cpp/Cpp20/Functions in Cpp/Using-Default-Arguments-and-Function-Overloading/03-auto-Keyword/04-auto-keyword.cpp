#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

const auto &get_larger_string(string &first, string &second)
{
    return first.length() > second.length() ? first : second;
}

int main()
{
    string first = "One string";
    string second = "Another string";

    const string &larger_string = get_larger_string(first, second);

    cout << larger_string << endl;

    return 0;
}

/* OUTPUT
    Another string
*/