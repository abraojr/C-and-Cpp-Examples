#include <iostream>
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    cout << "------------------------------" << endl;
    GraduateStudent liz("Liz", 3.1f, "Biology", true);
    liz.display_info();

    return 0;
}

/* OUTPUT
    ------------------------------
    Student: No-argument ctor
    GraduateStudent(name, gpa, major, scholarship) ctor
    Name: Liz
    GPA: 3.1
    Major: Biology
    Has scholarship: true
*/