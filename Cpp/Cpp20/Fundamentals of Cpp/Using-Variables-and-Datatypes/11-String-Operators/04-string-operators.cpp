#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string name_alice = "Alice";
    string name_peter = "Peter";

    cout << "Is Alice > Peter: " << (name_alice > name_peter) << endl;
    cout << "Is Alice < Peter: " << (name_alice < name_peter) << endl;
    cout << "Is Alice >= Peter: " << (name_alice >= name_peter) << endl;
    cout << "Is Peter <= Peter: " << (name_peter <= name_peter) << endl;
    cout << "Is Peter == Peter: " << (name_peter == name_peter) << endl;
    cout << "Is Peter != Peter: " << (name_peter != name_peter) << endl;

    return 0;
}

/* OUTPUT
    Is Alice > Peter: 0
    Is Alice < Peter: 1
    Is Alice >= Peter: 0
    Is Peter <= Peter: 1
    Is Peter == Peter: 1
    Is Peter != Peter: 0
*/