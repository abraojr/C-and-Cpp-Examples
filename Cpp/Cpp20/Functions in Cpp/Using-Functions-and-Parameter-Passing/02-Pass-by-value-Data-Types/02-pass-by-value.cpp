#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void update_country(string country_name);
void make_country_uppercase(string country_name);

int main()
{
    string country_name = "India";
    update_country(country_name);

    cout << "country_name after update_country call: " << country_name << endl;

    make_country_uppercase(country_name);

    cout << "country_name after make_country_uppercase call: " << country_name << endl;

    return 0;
}

void update_country(string country_name)
{
    cout << "In update_country" << endl;

    country_name = "Egypt";
}

void make_country_uppercase(string country_name)
{
    cout << "In make_country_uppercase" << endl;

    for (int i = 0; i < country_name.length(); i++)
    {
        country_name[i] = std::toupper(country_name[i]);
    }
}

/* OUTPUT
    In update_country
    country_name after update_country call: India
    In make_country_uppercase
    country_name after make_country_uppercase call: India
*/