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

    while (true)
    {
        char ch;

        input_file_stream.get(ch);

        if (input_file_stream.eof())
        {
            break;
        }

        cout << ch << "|";
    }

    cout << "*******File reading completed*******" << endl;

    return 0;
}

/* OUTPUT
    L|i|f|e| |i|s| |a| |l|o|n|g| |l|e|s|s|o|n| |i|n| |h|u|m|i|l|i|t|y|.|
    |
    |-|J|a|m|e|s| |M|.| |B|a|r|r|i|e|
    |
    |I| |f|i|n|d| |t|h|a|t| |t|h|e| |h|a|r|d|e|r| |I| |w|o|r|k|,| |t|h|e| |m|o|r|e| |l|u|c|k| |I| |s|e|e|m| |t|o| |h|a|v|e|
    |
    |-|T|h|o|m|a|s| |J|e|f|f|e|r|s|o|n|*******File reading completed*******
*/