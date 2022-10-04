#include <string>
#include <iostream>

#include "Student.h"

using std::cout;
using std::endl;
using std::string;

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