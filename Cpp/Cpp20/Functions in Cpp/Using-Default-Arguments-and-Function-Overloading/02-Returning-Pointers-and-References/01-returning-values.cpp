#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string *get_larger_string(string *first, string *second);

int main()
{
    string first = "One string";
    string second = "Another string";

    string *larger_string = get_larger_string(&first, &second);

    cout << *larger_string << endl;

    return 0;
}

string *get_larger_string(string *first, string *second)
{
    return first->length() > second->length() ? first : second;
}

/* OUTPUT
    Another string
*/