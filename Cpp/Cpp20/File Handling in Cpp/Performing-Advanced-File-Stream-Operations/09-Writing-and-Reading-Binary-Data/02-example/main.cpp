#include <iostream>
#include <fstream>
#include <vector>

#include "Department.h"

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main()
{
    ifstream input_file_stream;

    input_file_stream.open("departments.dat", std::ios::in | std::ios::binary);

    if (!input_file_stream)
    {
        cout << "The file departments.dat could not be opened for reading" << endl;
        return 1;
    }

    for (int i = 0; i < 4; i++)
    {
        Department department;

        input_file_stream.read(reinterpret_cast<char *>(&department), sizeof(Department));

        cout << department.get_name() << ": "
             << department.get_num_employees() << " "
             << department.get_salary_budget() << endl;
    }

    input_file_stream.close();

    cout << "*******File reading completed*******" << endl;

    return 0;
}

/* OUTPUT
    Engineering: 200 2.5e+06
    Customer Service: 89 1.22e+06
    Sales: 20 1.222e+06
    Operations:20 899001
    *******File reading completed*******
*/