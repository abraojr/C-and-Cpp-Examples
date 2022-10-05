#pragma once
#include <string>

#include "GraduateStudent.h"

class PhdStudent : public GraduateStudent
{
private:
    std::string thesis_topic;

public:
    PhdStudent(std::string name, float gpa, std::string major, bool scholarship, std::string thesis_topic);

    std::string get_thesis_topic() const;

    ~PhdStudent();
};