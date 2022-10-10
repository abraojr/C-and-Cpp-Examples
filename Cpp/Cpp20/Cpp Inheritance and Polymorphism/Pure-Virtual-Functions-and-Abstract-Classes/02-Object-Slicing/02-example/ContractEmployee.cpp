#include <string>
#include <iostream>

#include "ContractEmployee.h"

using std::cout;
using std::endl;
using std::string;

ContractEmployee::ContractEmployee(string name, float salary, int overtime_hours, float overtime_rate) : Employee("contract", name, salary), overtime_hours(overtime_hours), overtime_rate(overtime_rate) {}

float ContractEmployee::get_total_salary() const
{
    cout << "ContractEmployee: get_total_salary() " << get_name() << endl;

    return get_salary() + overtime_hours * overtime_rate;
}

ContractEmployee::~ContractEmployee()
{
    cout << "ContractEmployee object destructed: " << get_name() << endl;
}