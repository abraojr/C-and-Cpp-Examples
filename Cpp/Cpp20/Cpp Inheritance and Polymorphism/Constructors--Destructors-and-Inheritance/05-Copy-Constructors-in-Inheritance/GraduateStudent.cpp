#include <string>
#include <iostream>

#include "GraduateStudent.h"

using std::cout;
using std::endl;
using std::string;

GraduateStudent::GraduateStudent(string name, float gpa, string major, bool scholarship) : Student(name, gpa, major), scholarship(scholarship)
{
    cout << "GraduateStudent(name, gpa, major, scholarship) ctor" << endl;
}

GraduateStudent::GraduateStudent(const GraduateStudent &grad_student) : Student(grad_student), scholarship(grad_student.scholarship)
{
    cout << "GraduateStudent copy ctor" << endl;
}

bool GraduateStudent::has_scholarship() const
{
    return scholarship;
}

void GraduateStudent::display_info() const
{
    cout << "Name: " << get_name() << endl;
    cout << "GPA: " << get_gpa() << endl;
    cout << "Major: " << get_major() << endl;
    cout << "Has scholarship: " << std::boolalpha << scholarship << endl;
}