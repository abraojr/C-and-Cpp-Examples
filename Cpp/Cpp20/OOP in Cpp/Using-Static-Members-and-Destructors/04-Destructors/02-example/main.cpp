#include <iostream>

#include "Student.h"

using std::cout;
using std::endl;

void some_function()
{
    cout << "----------------------------------" << endl;
    cout << "Inside some_funtion" << endl;

    Student caroline("Caroline", 3.9f, "Math");
}

int main()
{
    Student robert("Robert", 3.3f, "Chemistry");

    {
        cout << "----------------------------------" << endl;
        Student edward("Edward", 3.6f, "Chemistry");
        cout << "Inside nested scope" << endl;
    }

    cout << "Just outside nested scope" << endl;

    some_function();

    cout << "----------------------------------" << endl;
    cout << "Returned from some_function" << endl;

    cout << "End of main..." << endl;

    return 0;
}

/* OUTPUT
    Student constructor called: Robert
    ----------------------------------
    Student constructor called: Edward
    Inside nested scope
    Student destructor called: Edward
    Just outside nested scope
    ----------------------------------
    Inside some_funtion
    Student constructor called: Caroline
    Student destructor called: Caroline
    ----------------------------------
    Returned from some_function
    End of main...
    Student destructor called: Robert
*/