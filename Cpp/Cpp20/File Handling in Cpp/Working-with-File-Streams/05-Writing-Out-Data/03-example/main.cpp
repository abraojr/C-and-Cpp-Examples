#include <iostream>
#include <fstream>
#include <vector>

using std::cout;
using std::endl;
using std::ofstream;
using std::string;
using std::vector;

int main()
{
    ofstream output_file_stream{"strings.txt"};

    if (!output_file_stream)
    {
        cout << "The file strings.txt could not be opened for writing" << endl;
        return 1;
    }

    vector<string> string_vector{"Emily Robinson", "Nancy Drew", "Ned Parker", "Richard Edmundson"};

    for (auto &i : string_vector)
    {
        output_file_stream << i << endl;
    }

    cout << "********File writing completed********" << endl;

    return 0;
}
/* OUTPUT
    ********File writing completed********
*/