#pragma once
#include <string>

class Student
{
private:
    std::string name;
    float gpa;
    std::string major;

public:
    Student();

    Student(std::string name, float gpa, std::string major);

    Student(const Student &student);

    std::string get_name() const;

    float get_gpa() const;

    std::string get_major() const;
};