#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

auto get_larger_string(string first, string second)
{
    if (first.length() > second.length())
    {
        return first;
    }
    else if (second.length() > first.length())
    {
        return second;
    }

    return string{};
}

int main()
{
    string larger_string = get_larger_string("Smaller length string", "Much larger length string");

    cout << larger_string << endl;

    return 0;
}

/* OUTPUT
    Much larger length string
*/