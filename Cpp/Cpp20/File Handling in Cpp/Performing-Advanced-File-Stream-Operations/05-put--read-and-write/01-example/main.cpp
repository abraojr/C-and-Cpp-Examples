#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
    ifstream input_file_stream("../quotes_file.txt");
    ofstream output_file_stream("another_quotes_file.txt");

    if (!input_file_stream)
    {
        cout << "The file quotes_file.txt could not be opened for reading" << endl;
        return 1;
    }

    if (!input_file_stream)
    {
        cout << "The file another_quotes_file.txt could not be opened for writing" << endl;
        return 1;
    }

    while (true)
    {
        char ch = input_file_stream.get();

        if (input_file_stream.eof())
        {
            break;
        }

        output_file_stream.put(ch);
    }

    cout << "*******File reading and writing completed*******" << endl;

    return 0;
}

/* OUTPUT
    *******File reading and writing completed*******
*/