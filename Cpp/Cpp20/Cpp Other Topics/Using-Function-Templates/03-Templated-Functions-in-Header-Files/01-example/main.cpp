#include <iostream>
#include <string>
#include <vector>

#include "function_templates.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "Smaller of 10.11 and 23.72 is: " << smaller(10.11, 23.72) << endl;

    string first = "Heidi";
    string second = "Carlos";

    cout << "Smaller of Heidi and Carlos is: " << smaller(first, second) << endl;

    cout << endl << "---------------Before swap" << endl;
    cout << "first: " << first << endl;
    cout << "second: " << second << endl;
    swap(first, second);
    cout << endl << "---------------After swap" << endl;
    cout << "first: " << first << endl;
    cout << "second: " << second << endl;

    return 0;
}

/* OUTPUT
    Smaller of 10.11 and 23.72 is: 10.11
    Smaller of Heidi and Carlos is: Carlos

    ---------------Before swap
    first: Heidi
    second: Carlos

    ---------------After swap
    first: Carlos
    second: Heidi
*/