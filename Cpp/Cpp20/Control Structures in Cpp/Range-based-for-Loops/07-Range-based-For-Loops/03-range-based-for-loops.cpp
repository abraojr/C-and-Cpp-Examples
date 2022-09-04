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
    map<string, int> student_map{
        {"Dorothy", 44},
        {"Nick", 58},
        {"Nina", 85},
        {"Desmond", 37}};

    float sum = 0;
    int count = 0;

    for (auto &[name, score] : student_map)
    {
        cout << name << ": " << score << endl;

        sum += score;
        count++;
    }

    cout << "Average score: " << sum / count << endl;

    return 0;
}

/* OUTPUT
    Desmond: 37
    Dorothy: 44
    Nick: 58
    Nina: 85
    Average score: 56
*/