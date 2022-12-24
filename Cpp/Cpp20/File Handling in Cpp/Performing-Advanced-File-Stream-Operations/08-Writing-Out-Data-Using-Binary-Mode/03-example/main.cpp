#include <iostream>
#include <fstream>
#include <vector>

#include "Department.h"

using std::cout;
using std::endl;
using std::ofstream;
using std::string;
using std::vector;

int main()
{
    ofstream output_file_stream;

    output_file_stream.open("departments.dat", std::ios::out | std::ios::binary);

    if (!output_file_stream)
    {
        cout << "The file departments.dat could not be opened for writing" << endl;
        return 1;
    }

    vector<Department> dept_vector;

    dept_vector.push_back(Department{"Engineering", 200, 2500000.23});
    dept_vector.push_back(Department{"Customer Service", 89, 1220000.99});
    dept_vector.push_back(Department{"Sales", 20, 1222000.45});
    dept_vector.push_back(Department{"Operations", 20, 899000.76});

    for (auto &dept : dept_vector)
    {
        output_file_stream << dept;
    }

    output_file_stream.close();

    cout << "*******File writing completed*******" << endl;

    return 0;
}

/* OUTPUT
    *******File writing completed*******
*/