#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::endl;
using std::map;
using std::pair;
using std::string;

int main()
{
    map<string, int> student_map;

    student_map.insert(pair<string, int>("Dorothy", 44));
    student_map.insert(pair<string, int>("Nick", 58));
    student_map.insert(pair<string, int>("Nina", 85));
    student_map.insert(pair<string, int>("Desmond", 37));

    for (auto student : student_map)
    {
        cout << student.first << ": " << student.second << endl;
    }

    cout << "--------------------------------------------------" << endl;

    cout << "Is map empty?: " << std::boolalpha << student_map.empty() << endl;
    cout << "Map size: " << student_map.size() << endl;
    cout << "Map max size: " << student_map.max_size() << endl;

    return 0;
}

/* OUTPUT
    Desmond: 37
    Dorothy: 44
    Nick: 58
    Nina: 85
    --------------------------------------------------
    Is map empty?: false
    Map size: 4
    Map max size: 134217727
*/