#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::size;
using std::string;

int main()
{
    string student_names[]{"Joseph", "Martin", "Sheila", "Tanya", "Nancy"};

    string name_to_search_for;
    cout << "Please enter the name of the student you are looking for: ";
    getline(cin, name_to_search_for);

    for (int i = 0; i < size(student_names); i++)
    {
        cout << "Searching..." << student_names[i] << endl;
        if (student_names[i] == name_to_search_for)
        {
            cout << "Student found at index = " << i << endl;
            break;
        }
    }

    return 0;
}

/* OUTPUT
    Please enter the name of the student you are looking for: Sheila
    Searching...Joseph
    Searching...Martin
    Searching...Sheila
    Student found at index = 2
*/