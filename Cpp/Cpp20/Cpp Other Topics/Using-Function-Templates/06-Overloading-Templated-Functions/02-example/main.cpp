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

     vector<string> names_vector{"Bob", "Harry", "John", "Jon", "Constance", "Julliene"};

     string lily = "Lily";
     vector<string> smaller_than_lily = smaller(names_vector, lily);

     for (auto &el : smaller_than_lily)
     {
          cout << el << endl;
     }

     vector<string> larger_than_lily = larger(names_vector, lily);

     for (auto &el : larger_than_lily)
     {
          cout << el << endl;
     }
     return 0;
}

/* OUTPUT
     template T smaller(vector<T> element_vector, T element)
     overloaded string smaller(string first, string second)
     overloaded string smaller(string first, string second)
     overloaded string smaller(string first, string second)
     overloaded string smaller(string first, string second)
     overloaded string smaller(string first, string second)
     overloaded string smaller(string first, string second)
     Bob
     Jon
     template T larger(vector<T> element_vector, T element)
     overloaded string larger(string first, string second)
     overloaded string larger(string first, string second)
     overloaded string larger(string first, string second)
     overloaded string larger(string first, string second)
     overloaded string larger(string first, string second)
     overloaded string larger(string first, string second)
     Harry
     Constance
     Julliene
*/