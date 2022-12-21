#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main()
{
    ifstream input_file_stream{"strings.txt"};

    if (!input_file_stream)
    {
        cout << "The file strings.txt could not be opened for reading" << endl;
        return 1;
    }

    while (true)
    {
        string string_var;

        input_file_stream >> string_var;

        if (input_file_stream.eof())
        {
            break;
        }

        cout << string_var << endl;
    }

    cout << "*******File reading completed*******" << endl;

    return 0;
}

/* OUTPUT
    Bangalore
    London
    Paris
    Boston
    Tokyo
    Seoul
    *******File reading completed*******
*/