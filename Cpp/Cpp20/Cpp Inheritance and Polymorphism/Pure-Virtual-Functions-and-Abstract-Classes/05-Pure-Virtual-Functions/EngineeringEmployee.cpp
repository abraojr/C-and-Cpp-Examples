#include <string>
#include <iostream>

#include "EngineeringEmployee.h"

using std::cout;
using std::endl;
using std::string;

EngineeringEmployee::EngineeringEmployee(string name, float base_salary,
                                         float bonus_percent, int num_stock_awards, float stock_price) : FulltimeEmployee(name, base_salary, bonus_percent),
                                                                                                         num_stock_awards(num_stock_awards), stock_price(stock_price) {}

float EngineeringEmployee::get_stock_compensation() const
{
    cout << "EngineeringEmployee: get_stock_compensation() " << get_name() << endl;

    return num_stock_awards * stock_price;
}