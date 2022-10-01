#include <iostream>
#include "Student.h"
#include "GraduateStudent.h"

using std::cout;
using std::endl;

int main()
{
    Student student;
    GraduateStudent grad_student;

    student.name = "Ethan";
    student.gpa = 3.7f;

    grad_student.name = "Vera";
    grad_student.gpa = 3.9f;
    grad_student.scholarship = true;

    cout << "Student name: " << student.get_name()
         << " gpa: " << student.get_gpa() << endl;

    cout << "GraduteStudent name: " << grad_student.get_name()
         << " gpa: " << grad_student.get_gpa()
         << " scholarship: " << std::boolalpha << grad_student.has_scholarship() << endl;

    return 0;
}

/* OUTPUT
    Student name: Ethan gpa: 3.7
    GraduteStudent name: Vera gpa: 3.9 scholarship: true
*/