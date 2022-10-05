#include <iostream>
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    GraduateStudent liz("Liz", 3.1f, "Biology", true);
    liz.display_info();

    cout << "------------------------------" << endl;

    GraduateStudent terry("Terry", 3.3f, "Math");
    terry.display_info();
    cout << "------------------------------" << endl;

    GraduateStudent jess;
    jess.display_info();

    return 0;
}

/* OUTPUT
    Student(name, gpa, major) ctor
    GraduateStudent(name, gpa, major, scholarship) ctor
    Name: Liz
    GPA: 3.1
    Major: Biology
    Has scholarship: true
    ------------------------------
    Student(name, gpa, major) ctor
    Name: Terry
    GPA: 3.3
    Major: Math
    Has scholarship: false
    ------------------------------
    Student: No-argument ctor
    Name:
    GPA: 0
    Major:
    Has scholarship: false
*/