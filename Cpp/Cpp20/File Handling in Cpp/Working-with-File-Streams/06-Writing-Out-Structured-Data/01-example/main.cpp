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
    ofstream output_file_stream{"student_scores.txt"};

    if (!output_file_stream)
    {
        cout << "The file student_scores.txt could not be opened for writing" << endl;
        return 1;
    }

    vector<string> names_vector{"Emily Robinson", "Nancy Drew", "Ned Parker", "Richard Edmundson"};
    vector<int> math_vector{90, 54, 76, 33};
    vector<int> english_vector{55, 87, 89, 53};
    vector<int> science_vector{67, 45, 88, 22};

    for (int i = 0; i < names_vector.size(); i++)
    {
        output_file_stream << names_vector[i] << endl;
        output_file_stream << math_vector[i] << " "
                           << english_vector[i] << " "
                           << science_vector[i] << endl;
    }

    cout << "********File writing completed********" << endl;

    return 0;
}
/* OUTPUT
    ********File writing completed********
*/