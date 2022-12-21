#include <iostream>
#include <fstream>
#include <vector>

using std::cout;
using std::endl;
using std::ofstream;
using std::vector;

int main()
{
    ofstream output_file_stream{"integers.txt"};

    if (!output_file_stream)
    {
        cout << "The file integers.txt could not be opened for writing" << endl;
        return 1;
    }

    vector<int> int_vector{111, 222, 333, 444, 555};

    for (auto &i : int_vector)
    {
        output_file_stream << i << endl;
    }

    cout << "********File writing completed********" << endl;

    return 0;
}
/* OUTPUT
    ********File writing completed********
*/