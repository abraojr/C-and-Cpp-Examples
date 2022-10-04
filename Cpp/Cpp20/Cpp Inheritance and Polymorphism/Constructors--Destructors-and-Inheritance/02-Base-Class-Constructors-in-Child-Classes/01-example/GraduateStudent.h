#pragma once
#include <string>

#include "Student.h"

class GraduateStudent : public Student
{
private:
    bool scholarship;

public:
    explicit GraduateStudent(bool scholarship);

    bool has_scholarship() const;

    void display_info() const;
};