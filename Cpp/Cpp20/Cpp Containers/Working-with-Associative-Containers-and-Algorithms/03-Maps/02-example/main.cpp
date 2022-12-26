#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::map;
using std::pair;
using std::string;

int main()
{
    map<string, string> capitals;

    capitals["Canada"] = "Ottawa";
    capitals["Greece"] = "Athens";
    capitals["India"] = "New Delhi";
    capitals["Malaysia"] = "Kuala Lumpur";

    cout << endl << "------------Entries------------" << endl;
    for (auto &entry : capitals)
    {
        cout << entry.first << ": " << entry.second << endl;
    }

    cout << endl << "------------Lookup by key------------" << endl;
    cout << "Capital of Canada is: " << capitals["Canada"] << endl;
    cout << "Capital of Greece is: " << capitals["Greece"] << endl;
    cout << "Capital of India is: " << capitals["India"] << endl;
    cout << "Capital of Malaysia is: " << capitals["Malaysia"] << endl;

    return 0;
}

/* OUTPUT
    ------------Entries------------
    Canada: Ottawa
    Greece: Athens
    India: New Delhi
    Malaysia: Kuala Lumpur

    ------------Lookup by key------------
    Capital of Canada is: Ottawa
    Capital of Greece is: Athens
    Capital of India is: New Delhi
    Capital of Malaysia is: Kuala Lumpur
*/