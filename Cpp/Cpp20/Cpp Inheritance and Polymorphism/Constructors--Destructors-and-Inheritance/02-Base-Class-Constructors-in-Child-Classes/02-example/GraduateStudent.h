#pragma once
#include <string>

#include "Student.h"

class GraduateStudent : public Student
{
private:
    bool scholarship;

public:
    explicit GraduateStudent(bool scholarship);

    GraduateStudent(std::string name, bool scholarship);

    GraduateStudent(std::string name, float gpa, bool scholarship);

    GraduateStudent(std::string name, float gpa, std::string major, bool scholarship);

    bool has_scholarship() const;

    void display_info() const;
};