#include <iostream>

#include "Student.h"

using std::cout;
using std::endl;

int main()
{
    Student *robert = new Student("Robert", 3.3f, "Chemistry");

    delete robert;
    robert = nullptr;
    cout << "End of main..." << endl;

    return 0;
}

/* OUTPUT
    Student constructor called: Robert
    Program constructor called: Chemistry
    Program destructor called: Chemistry
    Student destructor called: Robert
    End of main...
*/