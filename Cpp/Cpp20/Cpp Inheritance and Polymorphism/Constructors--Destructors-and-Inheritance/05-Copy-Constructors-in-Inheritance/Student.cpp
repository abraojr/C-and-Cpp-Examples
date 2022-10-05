#include <string>
#include <iostream>

#include "Student.h"

using std::cout;
using std::endl;
using std::string;

Student::Student()
{
    cout << "Student: No-argument ctor" << endl;
}

Student::Student(string name, float gpa, string major) : name(name), gpa(gpa), major(major)
{
    cout << "Student(name, gpa, major) ctor" << endl;
}

Student::Student(const Student &student) : name(student.name), gpa(student.gpa), major(student.major)
{
    cout << "Student copy ctor" << endl;
}

string Student::get_name() const
{
    return name;
}

float Student::get_gpa() const
{
    return gpa;
}

string Student::get_major() const
{
    return major;
}