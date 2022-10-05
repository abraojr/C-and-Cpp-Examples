#include <iostream>
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    cout << "---------------Original---------------" << endl;

    GraduateStudent liz("Liz", 3.1f, "Biology", true);
    liz.display_info();

    cout << "---------------Copy---------------" << endl;

    GraduateStudent liz_copy(liz);
    liz_copy.display_info();

    return 0;
}

/* OUTPUT
    ---------------Original---------------
    Student(name, gpa, major) ctor
    GraduateStudent(name, gpa, major, scholarship) ctor
    Name: Liz
    GPA: 3.1
    Major: Biology
    Has scholarship: true
    ---------------Copy---------------
    Student copy ctor
    GraduateStudent copy ctor
    Name: Liz
    GPA: 3.1
    Major: Biology
    Has scholarship: true
*/