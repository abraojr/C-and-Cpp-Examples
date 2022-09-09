#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    const string name = "Della";
    string &name_ref = const_cast<string &>(name);

    cout << "Original name: " << name << endl;

    name_ref = "Della Street";

    cout << "Updated name: " << name << endl;

    return 0;
}

/* OUTPUT
    Original name: Della
    Updated name: Della Street
*/