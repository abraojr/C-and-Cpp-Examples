#include <iostream>
#include <fstream>
#include <vector>

#include "Department.h"

using std::cout;
using std::endl;
using std::ifstream;
using std::string;
using std::vector;

int main()
{
    ifstream input_file_stream{"departments.txt"};

    if (!input_file_stream)
    {
        cout << "The file departments.txt could not be opened for reading" << endl;
        return 1;
    }

    vector<Department> dept_vector;

    while (true)
    {
        Department dept;

        input_file_stream >> dept;
        if (input_file_stream.eof())
        {
            break;
        }

        dept_vector.push_back(dept);
    }

    cout << "*******File reading completed*******" << endl;

    for (auto &dept : dept_vector)
    {
        cout << dept;
    }

    return 0;
}

/* OUTPUT
    *******File reading completed*******
    Engineering
    200 2500000.23
    Customer Service
    89 1220000.99
    Sales
    20 1220000.45
    Operations
    20 899000.76
*/