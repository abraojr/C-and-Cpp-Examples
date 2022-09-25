#include <iostream>

#include "Student.h"

using std::cout;
using std::endl;

int main()
{
    Student robert("Robert", 3.3f, "Chemistry");
    Student edward("Edward", 3.6f, "Chemistry");
    Student caroline("Caroline", 3.9f, "Math");

    cout << "Variables going out of scope now..." << endl;

    return 0;
}

/* OUTPUT
    Student constructor called: Robert
    Student constructor called: Edward
    Student constructor called: Caroline
    Variables going out of scope now...
    Student destructor called: Caroline
    Student destructor called: Edward
    Student destructor called: Robert
*/