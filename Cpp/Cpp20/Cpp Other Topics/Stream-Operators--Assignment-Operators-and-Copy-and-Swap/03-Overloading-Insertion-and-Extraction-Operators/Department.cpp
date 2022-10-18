#include <string>

#include "Department.h"

using std::string;

Department::Department(string name, int num_employees, float salary_budget) : name(name),
                                                                              num_employees(num_employees),
                                                                              salary_budget(salary_budget) {}
