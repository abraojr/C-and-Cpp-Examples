#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::size;
using std::string;

int main()
{
    string student_info[2][3]{
        {"Joseph", "Martin", "Nancy"}, // First row
        {"Janet", "Gregory", "Susan"}, // Second row
    };

    for (int row = 0; row < size(student_info); row++)
    {
        for (int col = 0; col < size(student_info[row]); col++)
        {
            cout << "Student at row = " << row << " col = " << col << " is " << student_info[row][col] << endl;
        }
    }

    return 0;
}

/*  OUTPUT
    Student at row = 0 col = 0 is Joseph
    Student at row = 0 col = 1 is Martin
    Student at row = 0 col = 2 is Nancy
    Student at row = 1 col = 0 is Janet
    Student at row = 1 col = 1 is Gregory
    Student at row = 1 col = 2 is Susan
*/