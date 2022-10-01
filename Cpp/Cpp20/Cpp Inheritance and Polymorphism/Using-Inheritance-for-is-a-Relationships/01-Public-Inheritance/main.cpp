#include <iostream>
#include "Student.h"
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    Student student;
    GraduateStudent grad_student;

    cout << "Student: " << typeid(student).name() << endl;
    cout << "Gradute Student: " << typeid(grad_student).name() << endl;

    cout << "Student is a base class of GraduateStudent: "
         << std::boolalpha << std::is_base_of<Student, GraduateStudent>() << endl;

    cout << "GraduateStudent is a base class of Student: "
         << std::boolalpha << std::is_base_of<GraduateStudent, Student>() << endl;

    return 0;
}

/* OUTPUT
    Student: 7Student
    Gradute Student: 15GraduateStudent
    Student is a base class of GraduateStudent: true
    GraduateStudent is a base class of Student: false
*/