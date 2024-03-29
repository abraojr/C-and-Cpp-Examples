#include <string>
#include <iostream>

#include "FulltimeEmployee.h"

using std::cout;
using std::endl;
using std::string;

FulltimeEmployee::FulltimeEmployee(string name, float salary, float bonus_percent) : Employee("fulltime", name, salary), bonus_percent(bonus_percent) {}

float FulltimeEmployee::get_bonus_percent() const
{
    return bonus_percent;
}

float FulltimeEmployee::get_total_salary() const
{
    cout << "FulltimeEmployee: get_total_salary() " << get_name() << endl;

    return get_salary() + get_salary() * bonus_percent * 0.01;
}