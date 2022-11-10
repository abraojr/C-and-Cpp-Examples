#include <iostream>
#include <string>
#include <vector>

#include "function_templates.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
     vector<double> double_vector{10.1, 20.2, 30.3, 40.4};
     vector<long> long_vector{1000l, 2000l};

     vector<double> merged_vector = merge_vectors<double, double>(double_vector, long_vector);

     for (double &el : merged_vector)
     {
          cout << el << endl;
     }

     merged_vector = merge_vectors<double, double, long>(double_vector, long_vector);

     for (double &el : merged_vector)
     {
          cout << el << endl;
     }

     return 0;
}

/* OUTPUT
     10.1
     20.2
     30.3
     40.4
     1000
     2000
     10.1
     20.2
     30.3
     40.4
     1000
     2000
*/