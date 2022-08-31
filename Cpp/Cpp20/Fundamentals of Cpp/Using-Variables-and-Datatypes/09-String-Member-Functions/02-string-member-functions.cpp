#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string name_alice = "Alice";
    string name_peter = "Peter";

    cout << "Comparing Alice to Peter: " << name_alice.compare(name_peter) << endl;
    cout << "Comparing Peter to Alice: " << name_peter.compare(name_alice) << endl;
    cout << "Comparing Peter to Peter: " << name_peter.compare(name_peter) << endl;

    return 0;
}

/* OUTPUT
    Comparing Alice to Peter: -15
    Comparing Peter to Alice: 15
    Comparing Peter to Peter: 0
*/