#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string name = "Della";
    const string &name_ref = name;

    cout << "Original name: " << name_ref << endl;

    // name_ref = "Della Street"; // compiler error
    name = "Della Street";

    cout << "Updated name: " << name_ref << endl;

    return 0;
}

/* OUTPUT
    Original name: Della
    Updated name: Della Street
*/