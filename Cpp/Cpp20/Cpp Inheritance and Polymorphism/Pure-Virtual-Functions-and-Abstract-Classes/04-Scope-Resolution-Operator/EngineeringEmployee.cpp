#include <string>
#include <iostream>

#include "EngineeringEmployee.h"

using std::cout;
using std::endl;
using std::string;

EngineeringEmployee::EngineeringEmployee(string name, float salary,
                                         float bonus_percent, int num_stock_awards, float stock_price) : FulltimeEmployee(name, salary, bonus_percent),
                                                                                                         num_stock_awards(num_stock_awards), stock_price(stock_price) {}

float EngineeringEmployee::get_total_salary() const
{
    cout << "EngineeringEmployee: get_total_salary() " << get_name() << endl;

    float base_plus_bonus_salary = FulltimeEmployee::get_total_salary();

    return base_plus_bonus_salary + num_stock_awards * stock_price;
}