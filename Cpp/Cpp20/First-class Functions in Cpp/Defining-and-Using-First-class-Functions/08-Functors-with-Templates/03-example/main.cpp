#include <iostream>
#include <vector>
#include <exception>

#include "compare_functions.h"
#include "compare_function_objects.h"

using std::cout;
using std::endl;
using std::exception;
using std::string;
using std::vector;

template <typename T, typename Comparison>
const T find_max_or_min(vector<T> values, Comparison compare)
{
     if (values.empty())
     {
          throw exception();
     }

     T max_or_min = values.at(0);

     for (const T &val : values)
     {
          if (compare(val, max_or_min))
          {
               max_or_min = val;
          }
     }

     return max_or_min;
}

int main()
{
     vector<double> double_vector{100.34, 23.98, 98.45, 56.34, -9.56, 112.45};

     cout << "Double-----------------" << endl;
     cout << "Maximum value is: " << find_max_or_min(double_vector, larger) << endl;
     cout << "Minimum value is: " << find_max_or_min(double_vector, smaller) << endl;

     vector<string> string_vector{"Rosalind", "John", "Tim", "Igor", "Gerardine"};

     StringLonger string_longer;
     StringShorter string_shorter;

     cout << "String-------------" << endl;
     cout << "Longest string is: " << find_max_or_min(string_vector, string_longer) << endl;
     cout << "Shortest string is: " << find_max_or_min(string_vector, string_shorter) << endl;

     return 0;
}

/* OUTPUT
     Double-----------------
     Maximum value is: 112.45
     Minimum value is: -9.56
     String-------------
     Longest string is: Gerardine
     Shortest string is: Tim
*/