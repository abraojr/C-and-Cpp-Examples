#include <iostream>

using std::cout;
using std::endl;

float double_salary(float salary)
{
    float doubled_salary = salary * 2;

    return doubled_salary;
}

float compute_bonus(float salary, float bonus_percent)
{
    float total_salary = salary + salary * bonus_percent * 0.01;

    return total_salary;
}

int main()
{
    float salary = 80000.0f;
    float expenses = 45345.34f;

    const float &total_salary = compute_bonus(salary, 10);

    cout << "Salary: " << salary << endl;
    cout << "Expenses: " << expenses << endl;
    cout << "Total salary (through reference): " << total_salary << endl;

    return 0;
}

/* OUTPUT
    Salary: 80000
    Expenses: 45345.3
    Total salary (through reference): 88000
*/