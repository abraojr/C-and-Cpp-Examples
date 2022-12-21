#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main()
{
    ifstream input_file_stream{"names.txt"};

    if (!input_file_stream)
    {
        cout << "The file names.txt could not be opened for reading" << endl;
        return 1;
    }

    while (true)
    {
        string string_var;

        std::getline(input_file_stream, string_var);

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
    Deborah Doolittle
    Robert Redford
    Ellen Eisner
    Tina Tang
    Joseph Jones
    *******File reading completed*******
*/