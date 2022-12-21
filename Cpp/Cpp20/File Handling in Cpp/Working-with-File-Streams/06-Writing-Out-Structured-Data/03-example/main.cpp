#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using std::cout;
using std::endl;
using std::ofstream;
using std::string;
using std::vector;

int main()
{
    ofstream output_file_stream;

    output_file_stream.open("student_scores.txt", std::ios::out);

    if (!output_file_stream)
    {
        cout << "The file student_scores.txt could not be opened for writing" << endl;
        return 1;
    }

    vector<string> names_vector{"Emily Kruglick", "Nancy Smith", "Ned Nickerson", "Richard Jones"};
    vector<float> math_vector{90.345, 54.6322, 76.345, 33.865};
    vector<float> english_vector{55.3445, 87.7546, 89.98765, 53.2746};
    vector<float> science_vector{67.3778, 45.2759, 88.2309, 22.8854};

    for (int i = 0; i < names_vector.size(); i++)
    {
        output_file_stream << std::left << std::setw(20) << names_vector[i] << ": ";
        output_file_stream << std::fixed << std::setprecision(3) << math_vector[i] << " "
                           << std::fixed << std::setprecision(3) << english_vector[i] << " "
                           << std::fixed << std::setprecision(3) << science_vector[i] << endl;
    }

    output_file_stream.close();

    cout << "********File writing completed********" << endl;

    return 0;
}
/* OUTPUT
    ********File writing completed********
*/