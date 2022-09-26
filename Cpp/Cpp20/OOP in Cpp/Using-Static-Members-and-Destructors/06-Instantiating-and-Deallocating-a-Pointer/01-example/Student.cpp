#include <string>
#include <iostream>

#include "Student.h"

using std::cout;
using std::endl;
using std::string;

Student::Student(string name, float gpa, string major) : name(name), gpa(gpa), major(major)
{
    cout << "Student constructor called: " << name << endl;
    program = new Program(major);
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

Student::~Student()
{
    delete program;
    program = nullptr;
    cout << "Student destructor called: " << name << endl;
}