#include <iostream>
#include <list>

using std::cout;
using std::endl;
using std::list;
using std::string;

void print_countries(const list<string> &countries)
{
    for (const string &country : countries)
    {
        cout << country << " ";
    }

    cout << endl;
}

int main()
{
    list<string> countries = {"India", "USA", "Canada"};

    cout << "-------------------Front and back of the list-------------------" << endl;
    cout << "Front: " << countries.front() << endl;
    cout << "Back: " << countries.back() << endl;

    countries.push_front("Nepal");

    cout << "-------------------Contents (after push front)-------------------" << endl;
    print_countries(countries);

    countries.push_back("Tunisia");

    cout << "-------------------Contents (after push back)-------------------" << endl;
    print_countries(countries);

    countries.pop_front();

    cout << "-------------------Contents (after pop front)-------------------" << endl;
    print_countries(countries);

    countries.pop_back();

    cout << "-------------------Contents (after pop back)-------------------" << endl;
    print_countries(countries);

    return 0;
}

/*  OUTPUT
    -------------------Front and back of the list-------------------
    Front: India
    Back: Canada
    -------------------Contents (after push front)-------------------
    Nepal India USA Canada
    -------------------Contents (after push back)-------------------
    Nepal India USA Canada Tunisia
    -------------------Contents (after pop front)-------------------
    India USA Canada Tunisia
    -------------------Contents (after pop back)-------------------
    India USA Canada
*/