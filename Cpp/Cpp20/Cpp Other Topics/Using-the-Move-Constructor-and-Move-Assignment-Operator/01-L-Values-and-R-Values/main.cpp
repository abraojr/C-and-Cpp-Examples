#include <iostream>

using std::cout;
using std::endl;
using std::string;

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

    float savings = salary - expenses;

    // Give a 5% raise and compute bonus
    float total_salary = compute_bonus(salary * 1.05, 10);

    // Double salary and compute bonus
    float new_total_salary = compute_bonus(double_salary(salary), 5);

    cout << "Salary: " << salary << endl;
    cout << "Expenses: " << expenses << endl;
    cout << "Savings: " << savings << endl;
    cout << "Total salary: " << total_salary << endl;
    cout << "New total salary: " << new_total_salary << endl;

    return 0;
}

/* OUTPUT
    Salary: 80000
    Expenses: 45345.3
    Savings: 34654.7
    Total salary: 92400
    New total salary: 168000
*/