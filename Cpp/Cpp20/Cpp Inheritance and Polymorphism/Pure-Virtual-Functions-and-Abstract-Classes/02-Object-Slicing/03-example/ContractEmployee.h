#pragma once
#include <string>

#include "Employee.h"

class ContractEmployee : public Employee
{
private:
    int overtime_hours;
    float overtime_rate;

public:
    ContractEmployee(std::string name, float salary, int overtime_hours, float overtime_rate);

    float get_total_salary() const override final;

    ~ContractEmployee();
};