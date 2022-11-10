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
     vector<int> int_vector{10, 20, 30, 40};
     vector<long> long_vector{1000l, 2000l};

     vector<long> merged_vector = merge_vectors<long>(int_vector, long_vector);

     for (long &el : merged_vector)
     {
          cout << el << endl;
     }

     return 0;
}

/* OUTPUT
     10
     20
     30
     40
     1000
     2000
*/