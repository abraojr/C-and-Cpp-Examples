#pragma once
#include <string>

#include "Student.h"

class GraduateStudent : public Student
{
private:
    bool scholarship;

public:
    GraduateStudent() = default;

    bool has_scholarship() const;

    void set_scholarship(bool s);

    void display_info() const;
};