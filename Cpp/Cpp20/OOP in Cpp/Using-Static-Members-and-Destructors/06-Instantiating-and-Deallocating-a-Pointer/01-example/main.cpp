#include <iostream>

#include "Student.h"

using std::cout;
using std::endl;

int main()
{
    Student robert("Robert", 3.3f, "Chemistry");
    Student caroline("Caroline", 3.9f, "Math");

    cout << "End of main..." << endl;

    return 0;
}

/* OUTPUT
    Student constructor called: Robert
    Program constructor called: Chemistry
    Student constructor called: Caroline
    Program constructor called: Math
    End of main...
    Program destructor called: Math
    Student destructor called: Caroline
    Program destructor called: Chemistry
    Student destructor called: Robert
*/