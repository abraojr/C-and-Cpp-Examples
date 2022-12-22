#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main()
{
    ifstream input_file_stream{"quotes_file.txt"};

    if (!input_file_stream)
    {
        cout << "The file quotes_file.txt could not be opened for reading" << endl;
        return 1;
    }

    char char_buffer[20];
    while (true)
    {
        input_file_stream.get(char_buffer, 20);

        if (input_file_stream.eof())
        {
            break;
        }

        if (input_file_stream.peek() == '\n')
        {
            input_file_stream.ignore();
        }

        cout << char_buffer << endl;
    }

    cout << "*******File reading completed*******" << endl;

    return 0;
}

/* OUTPUT
    Life is a long less
    on in humility.
    -James M. Barrie
    I find that the har
    der I work, the mor
    e luck I seem to ha
    ve
    *******File reading completed*******
*/