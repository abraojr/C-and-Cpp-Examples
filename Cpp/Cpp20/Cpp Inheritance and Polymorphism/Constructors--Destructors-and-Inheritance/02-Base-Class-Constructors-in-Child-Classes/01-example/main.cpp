#include <iostream>
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    GraduateStudent ethan(false);

    cout << "------------------------------" << endl;

    GraduateStudent vera(true);

    return 0;
}

/* OUTPUT
    Student: No-argument ctor
    GraduateStudent(scholarship) ctor
    ------------------------------
    Student: No-argument ctor
    GraduateStudent(scholarship) ctor
*/