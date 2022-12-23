#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main()
{
    ifstream input_file_stream("../quotes_file.txt");

    if (!input_file_stream)
    {
        cout << "The file quotes_file.txt could not be opened for reading" << endl;
        return 1;
    }

    input_file_stream.seekg(11);

    cout << "Current initial position: " << input_file_stream.tellg() << endl;

    char ch = input_file_stream.get();
    cout << "Character at position: " << ch << endl;

    cout << "New position: " << input_file_stream.tellg() << endl;

    cout << "*******File reading completed*******" << endl;

    return 0;
}

/* OUTPUT
    Current initial position: 11
    Character at position: o
    New position: 12
    *******File reading completed*******
*/