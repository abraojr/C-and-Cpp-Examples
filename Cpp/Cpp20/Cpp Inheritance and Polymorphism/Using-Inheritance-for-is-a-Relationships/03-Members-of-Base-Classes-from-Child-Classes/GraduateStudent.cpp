#include <string>
#include <iostream>

#include "GraduateStudent.h"

using std::cout;
using std::endl;
using std::string;

bool GraduateStudent::has_scholarship() const
{
    return scholarship;
}

void GraduateStudent::set_scholarship(bool s)
{
    scholarship = s;
}

void GraduateStudent::display_info() const
{
    cout << "name: " << get_name() << " gpa: " << get_gpa()
         << " scholarship: " << std::boolalpha << scholarship << endl;
}