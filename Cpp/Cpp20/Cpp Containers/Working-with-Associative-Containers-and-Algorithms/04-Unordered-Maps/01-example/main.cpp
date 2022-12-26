#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::map;
using std::pair;
using std::string;

void print_map(const map<string, float> &map)
{
    for (auto &entry : map)
    {
        cout << entry.first << ": " << entry.second << endl;
    }
}

int main()
{
    map<string, float> student_gpa = {
        {"Ava", 9.8},
        {"James", 7.3},
        {"Patricia", 5.8}};

    cout << endl << "------------Original Entries------------" << endl;
    print_map(student_gpa);

    student_gpa.insert({"Ava", 9.0});

    cout << endl << "------------Entries (not updated)------------" << endl;
    print_map(student_gpa);

    student_gpa["James"] = 6.0;

    map<string, float>::iterator it = student_gpa.find("Patricia");
    if (it != student_gpa.end())
    {
        it->second = 6.0;
    }

    cout << endl << "------------Entries updated------------" << endl;
    print_map(student_gpa);

    return 0;
}

/* OUTPUT
    ------------Original Entries------------
    Ava: 9.8
    James: 7.3
    Patricia: 5.8

    ------------Entries (not updated)------------
    Ava: 9.8
    James: 7.3
    Patricia: 5.8

    ------------Entries updated------------
    Ava: 9.8
    James: 6
    Patricia: 6
*/