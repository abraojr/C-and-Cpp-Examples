#pragma once
#include <string>

class Student
{
private:
    static inline unsigned int student_count{0};

    std::string name;
    float gpa;
    std::string major;

public:
    Student(std::string name, float gpa, std::string major);

    std::string get_name() const;

    float get_gpa() const;

    std::string get_major() const;
};