#include <iostream>
#include <fstream>
#include <vector>

using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::vector;

int main()
{
    ofstream output_file_stream;

    output_file_stream.open("names.txt", std::ios::in | std::ios::ate);

    if (!output_file_stream)
    {
        cout << "The file names.txt could not be opened for writing" << endl;
        return 1;
    }

    output_file_stream.seekp(-40, std::ios::cur);

    vector<string> string_vector{"Caroline Smith",
                                 "Richard Jones",
                                 "Sarah Parker",
                                 "Chris Evans"};

    for (auto &i : string_vector)
    {
        output_file_stream << i << endl;
    }

    output_file_stream.close();

    cout << "*******File writing completed*******" << endl;

    return 0;
}

/* OUTPUT
    *******File writing completed*******
*/