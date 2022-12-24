#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::fstream;
using std::string;

int main()
{
    fstream file_stream{"names.txt"};

    if (!file_stream)
    {
        cout << "The file names.txt could not be opened for reading and writing" << endl;
        return 1;
    }

    while (true)
    {
        string name;
        std::getline(file_stream, name);

        if (file_stream.good())
        {
            cout << "Good bit set, stream is ok" << endl;
        }
        else
        {
            cout << "Good bit is NOT set" << endl;
        }

        if (file_stream.eof())
        {
            cout << "End of file reached file reading complete" << endl;
            break;
        }

        cout << name << endl;
    }

    return 0;
}

/* OUTPUT
    Good bit set, stream is ok
    Peter Parker

    Good bit set, stream is ok
    Carol Ellison

    Good bit set, stream is ok
    Paula Jones

    Good bit is NOT set
    End of file reached file reading complete
*/