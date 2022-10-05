#include <string>
#include <iostream>

#include "GraduateStudent.h"

using std::cout;
using std::endl;
using std::string;

GraduateStudent::GraduateStudent(string name, float gpa, string major, bool scholarship) : Student(name, gpa, major), scholarship(scholarship)
{
    cout << "GraduateStudent constructor: " << name << endl;
}

bool GraduateStudent::has_scholarship() const
{
    return scholarship;
}

GraduateStudent::~GraduateStudent()
{
    cout << "GraduateStudent destructor: " << get_name() << endl;
}