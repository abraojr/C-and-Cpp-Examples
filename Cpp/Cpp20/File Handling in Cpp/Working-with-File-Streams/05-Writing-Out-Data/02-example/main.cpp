#include <iostream>
#include <fstream>
#include <vector>

using std::cout;
using std::endl;
using std::ofstream;
using std::vector;

int main()
{
    ofstream output_file_stream{"floats.txt"};

    if (!output_file_stream)
    {
        cout << "The file floats.txt could not be opened for writing" << endl;
        return 1;
    }

    vector<float> float_vector{111.11, 222.22, 333.33, 444.44, 555.55};

    for (auto &i : float_vector)
    {
        output_file_stream << i << endl;
    }

    cout << "********File writing completed********" << endl;

    return 0;
}
/* OUTPUT
    ********File writing completed********
*/