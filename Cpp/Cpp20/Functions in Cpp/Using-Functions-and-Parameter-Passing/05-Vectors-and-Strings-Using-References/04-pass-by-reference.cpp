#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void format_and_print(std::string_view first_name, std::string_view last_name, std::string_view city);

int main()
{
    format_and_print("Chris", "Jackson", "San Jose");

    return 0;
}

void format_and_print(std::string_view first_name, std::string_view last_name, std::string_view city)
{
    cout << "** " << first_name << " " << last_name << " (" << city << ") **" << endl;
}

/* OUTPUT
    ** Chris Jackson (San Jose) **
*/