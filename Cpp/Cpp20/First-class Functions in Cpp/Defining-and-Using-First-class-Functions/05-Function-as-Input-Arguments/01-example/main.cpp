#include <iostream>
#include <vector>
#include <exception>

#include "compare_functions.h"

using std::cout;
using std::endl;
using std::exception;
using std::vector;

const double find_max_or_min(vector<double> values,
                             bool (*compare_fn)(const double, const double))
{
    if (values.empty())
    {
        throw exception();
    }

    double max_or_min = values.at(0);

    for (const double &val : values)
    {
        if (compare_fn(val, max_or_min))
        {
            max_or_min = val;
        }
    }

    return max_or_min;
}

int main()
{
    vector<double> double_vector{100.34, 23.98, 98.45, 56.34, -9.65, 112.45};

    cout << "Maximum value is: " << find_max_or_min(double_vector, larger) << endl;

    cout << "Minimum value is: " << find_max_or_min(double_vector, smaller) << endl;

    return 0;
}

/* OUTPUT
    Maximum value is: 112.45
    Minimum value is: -9.65
*/