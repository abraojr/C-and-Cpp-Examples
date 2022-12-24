#include <iostream>
#include <fstream>

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

        input_file_stream >> department;

        cout << department;
    }

    input_file_stream.close();

    return 0;
}

/* OUTPUT
    Engineering
    200 2500000.25
    Customer Service
    89 1220001.00
    Sales
    20 1222000.50
    Operations
    20 899000.75
*/