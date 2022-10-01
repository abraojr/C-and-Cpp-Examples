#pragma once
#include <string>

#include "Student.h"

class GraduateStudent : public Student
{
public:
    bool scholarship;

    GraduateStudent() = default;

    bool has_scholarship() const;
};