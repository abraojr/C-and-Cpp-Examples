#include <iostream>
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    GraduateStudent ethan(false);
    cout << "------------------------------" << endl;

    GraduateStudent vera("Vera", true);
    cout << "------------------------------" << endl;

    GraduateStudent larry("Larry", 3.4f, true);
    cout << "------------------------------" << endl;

    GraduateStudent liz("Liz", 3.1f, "Biology", true);
    cout << "------------------------------" << endl;

    return 0;
}

/* OUTPUT
    Student: No-argument ctor
    GraduateStudent(scholarship) ctor
    ------------------------------
    Student(name) ctor
    GraduateStudent(name, scholarship) ctor
    ------------------------------
    Student(name, gpa) ctor
    GraduateStudent(name, gpa, scholarship) ctor
    ------------------------------
    Student(name, gpa, major) ctor
    GraduateStudent(name, gpa, major, scholarship) ctor
    ------------------------------
*/