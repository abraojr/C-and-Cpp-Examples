#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::make_pair;
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

    student_gpa.insert(make_pair("Oliver", 6.8));
    student_gpa.insert(pair<string, float>("Harry", 6.8));
    student_gpa.insert({"George", 4.9});

    cout << endl << "------------Entries after insert------------" << endl;
    print_map(student_gpa);

    student_gpa.erase("James");

    map<string, float>::iterator it = student_gpa.find("Harry");
    student_gpa.erase(it);

    cout << endl << "------------Entries after erase------------" << endl;
    print_map(student_gpa);

    return 0;
}

/* OUTPUT
    ------------Original Entries------------
    Ava: 9.8
    James: 7.3
    Patricia: 5.8

    ------------Entries after insert------------
    Ava: 9.8
    George: 4.9
    Harry: 6.8
    James: 7.3
    Oliver: 6.8
    Patricia: 5.8

    ------------Entries after erase------------
    Ava: 9.8
    George: 4.9
    Oliver: 6.8
    Patricia: 5.8
*/