#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main()
{
    ifstream input_file_stream{"floats.txt"};

    if (!input_file_stream)
    {
        cout << "The file floats.txt could not be opened for reading" << endl;
        return 1;
    }

    while (true)
    {
        float float_var;

        input_file_stream >> float_var;

        if (input_file_stream.eof())
        {
            break;
        }

        cout << float_var << endl;
    }

    cout << "*******File reading completed*******" << endl;

    return 0;
}

/* OUTPUT
    100.11
    200.22
    300.33
    400.44
    500.55
    *******File reading completed*******
*/