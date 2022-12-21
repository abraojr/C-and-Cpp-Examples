#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main()
{
    ifstream input_file_stream;

    input_file_stream.open("strings.txt", std::ios::in);

    if (!input_file_stream)
    {
        cout << "The file strings.txt could not be opened for reading" << endl;
        return 1;
    }

    char char_var;

    while (true)
    {
        input_file_stream >> char_var;

        if (input_file_stream.eof())
        {
            break;
        }

        cout << char_var << endl;
    }

    input_file_stream.close();

    cout << "*******File reading completed*******" << endl;

    return 0;
}

/* OUTPUT
    B
    a
    n
    g
    a
    l
    o
    r
    e
    L
    o
    n
    d
    o
    n
    P
    a
    r
    i
    s
    B
    o
    s
    t
    o
    n
    T
    o
    k
    y
    o
    S
    e
    o
    u
    l
    *******File reading completed*******
*/