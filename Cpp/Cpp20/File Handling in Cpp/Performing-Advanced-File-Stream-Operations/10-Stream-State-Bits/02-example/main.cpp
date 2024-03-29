#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::fstream;
using std::string;

int main()
{
    fstream file_stream{"../integers.txt"};

    if (!file_stream)
    {
        cout << "The file integers.txt could not be opened for reading and writing" << endl;
        return 1;
    }

    while (true)
    {
        int num;
        file_stream >> num;

        if (file_stream.good())
        {
            cout << "Good bit set, stream is ok" << endl;
        }
        else if (file_stream.eof())
        {
            cout << "End of file reached file reading complete" << endl;
            break;
        }
        else if (file_stream.fail())
        {
            cout << "A non-fatal error occurred while reading -- recovering" << endl;

            // Clear the failbit
            file_stream.clear();

            // Do something to recover from the non-fatal error
            string ignored;
            std::getline(file_stream, ignored);

            continue;
        }

        cout << num << endl;
    }

    return 0;
}

/* OUTPUT
    Good bit set, stream is ok
    1001
    Good bit set, stream is ok
    2002
    A non-fatal error occurred while reading -- recovering
    End of file reached file reading complete
*/