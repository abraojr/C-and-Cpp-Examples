#pragma once
#include <string>

#include "Student.h"

class GraduateStudent : public Student
{
private:
    bool scholarship;

public:
    GraduateStudent(std::string name, float gpa, std::string major, bool scholarship);

    bool has_scholarship() const;

    ~GraduateStudent();
};