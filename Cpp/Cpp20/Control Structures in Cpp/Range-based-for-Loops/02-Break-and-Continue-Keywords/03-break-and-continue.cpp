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

    string name_to_skip;
    cout << "Please enter the name of the student you want to skip: ";
    getline(cin, name_to_skip);

    for (int i = 0; i < size(student_names); i++)
    {
        if (student_names[i] == name_to_skip)
        {
            cout << "Skipping i = " << i << endl;
            continue;
        }

        cout << student_names[i] << endl;
    }

    return 0;
}

/* OUTPUT
    Please enter the name of the student you want to skip: Sheila
    Joseph
    Martin
    Skipping i = 2
    Tanya
    Nancy
*/