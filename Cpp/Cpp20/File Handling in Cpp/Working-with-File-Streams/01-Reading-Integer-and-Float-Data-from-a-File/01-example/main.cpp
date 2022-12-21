#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main()
{
    ifstream input_file_stream("integers.txt");

    if (!input_file_stream)
    {
        cout << "The file integers.txt could not be opened for reading" << endl;
        return 1;
    }

    while (true)
    {
        int int_var;

        input_file_stream >> int_var;

        if (input_file_stream.eof())
        {
            break;
        }

        cout << int_var << endl;
    }

    cout << "*******File reading completed*******" << endl;

    return 0;
}

/* OUTPUT
    1000
    2000
    3000
    4000
    5000
    *******File reading completed*******
*/