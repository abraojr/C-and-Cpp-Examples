#include <string>
#include <iostream>

#include "Student.h"

using std::cout;
using std::endl;
using std::string;

// Defined outside the class!
unsigned int Student::student_count{0};

Student::Student(string name, float gpa, string major) : name(name), gpa(gpa), major(major)
{
    student_count++;

    cout << "We have created " << student_count << " student object(s)" << endl;
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