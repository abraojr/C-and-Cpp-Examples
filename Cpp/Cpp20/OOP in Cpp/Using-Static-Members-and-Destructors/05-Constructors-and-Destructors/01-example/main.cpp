#include <iostream>

#include "Student.h"

using std::cout;
using std::endl;

int main()
{
    Student *robert = new Student("Robert", 3.3f, "Chemistry");

    cout << "End of main..." << endl;

    return 0;
}

/* OUTPUT
    Student constructor called: Robert
    End of main...
*/