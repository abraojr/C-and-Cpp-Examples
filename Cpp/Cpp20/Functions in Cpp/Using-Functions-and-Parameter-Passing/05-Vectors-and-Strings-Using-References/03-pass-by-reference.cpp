#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void format_and_print(const string &first_name, const string &last_name, const string &city);

int main()
{
    format_and_print("Chris", "Jackson", "San Jose");

    return 0;
}

void format_and_print(const string &first_name, const string &last_name, const string &city)
{
    string formatted_string = "** " + first_name + " " + last_name + " (" + city + ") **";

    cout << formatted_string << endl;
}

/* OUTPUT
    ** Chris Jackson (San Jose) **
*/