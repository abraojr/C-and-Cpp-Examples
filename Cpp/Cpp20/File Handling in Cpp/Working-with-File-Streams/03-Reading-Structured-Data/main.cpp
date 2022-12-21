#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main()
{
    ifstream input_file_stream{"student_scores.txt"};

    if (!input_file_stream)
    {
        cout << "The file student_scores.txt could not be opened for reading" << endl;
        return 1;
    }

    while (input_file_stream)
    {
        string name;
        int math, english, science;

        std::getline(input_file_stream, name);
        input_file_stream >> math >> english >> science;

        // Ignore the newline after last score
        input_file_stream.ignore();

        if (input_file_stream.eof())
        {
            break;
        }

        cout << "Name: " << name
             << " Math: " << math
             << " English: " << english
             << " Science: " << science
             << endl;
    }

    cout << "*******File reading completed*******" << endl;

    return 0;
}

/* OUTPUT
    Name: Deborah Doolittle Math: 45 English: 56 Science: 87
    Name: Robert Redford Math: 76 English: 32 Science: 45
    Name: Ellen Eisner Math: 38 English: 33 Science: 99
    Name: Tina Tang Math: 66 English: 82 Science: 23
    Name: Joseph Jones Math: 98 English: 11 Science: 34
    *******File reading completed*******
*/