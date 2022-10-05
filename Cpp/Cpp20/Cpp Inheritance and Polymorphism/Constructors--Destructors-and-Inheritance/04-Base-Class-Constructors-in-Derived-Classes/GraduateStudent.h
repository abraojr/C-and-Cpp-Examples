#pragma once
#include <string>

#include "Student.h"

class GraduateStudent : public Student
{
    using Student::Student;

private:
    bool scholarship;

public:
    GraduateStudent(std::string name, float gpa, std::string major, bool scholarship);

    bool has_scholarship() const;

    void display_info() const;
};