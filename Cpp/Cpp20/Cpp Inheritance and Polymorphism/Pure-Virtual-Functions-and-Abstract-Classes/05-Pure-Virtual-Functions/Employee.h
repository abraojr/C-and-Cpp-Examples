#pragma once
#include <string>

class Employee
{
private:
    std::string employee_type;
    std::string name;

public:
    Employee(std::string employee_type, std::string name);

    std::string get_employee_type() const;

    std::string get_name() const;

    float virtual get_salary() const = 0;

    float virtual get_stock_compensation() const = 0;

    float get_total_compensation() const;
};