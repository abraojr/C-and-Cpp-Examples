#include <iostream>
#include <vector>
#include <exception>

#include "compare_functions.h"

using std::cout;
using std::endl;
using std::exception;
using std::string;
using std::vector;

template <typename T>
const T find_max_or_min(vector<T> values, bool (*compare_fn)(const T &, const T &))
{
    if (values.empty())
    {
        throw exception();
    }

    T max_or_min = values.at(0);

    for (const T &val : values)
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

    cout << "Double------------" << endl;
    cout << "Maximum value is: " << find_max_or_min(double_vector, larger) << endl;
    cout << "Minimum value is: " << find_max_or_min(double_vector, smaller) << endl;

    vector<string> string_vector{"Gertrude", "John", "Mae", "Vladimir", "Rose"};

    cout << "String------------" << endl;
    cout << "Maximum value is: " << find_max_or_min(string_vector, longer) << endl;
    cout << "Minimum value is: " << find_max_or_min(string_vector, shorter) << endl;

    return 0;
}

/* OUTPUT
    Double------------
    Maximum value is: 112.45
    Minimum value is: -9.65
    String------------
    Maximum value is: Gertrude
    Minimum value is: Mae
*/