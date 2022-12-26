#include <chrono>
#include <iostream>
#include <map>
#include <unordered_map>

using std::cout;
using std::endl;
using std::make_pair;
using std::map;
using std::unordered_map;
using namespace std::chrono;

int main()
{
    map<int, int> ordered_map = {
        {3, 3},
        {13, 13},
        {23, 23},
        {33, 33}};

    for (int i = 0; i < 300000; i++)
    {
        ordered_map.insert(make_pair(i, i));
    }

    unordered_map<int, int> unordered_map = {
        {3, 3},
        {13, 13},
        {23, 23},
        {33, 33}};

    for (int i = 0; i < 300000; i++)
    {
        unordered_map.insert(make_pair(i, i));
    }

    auto start = high_resolution_clock::now();
    for (int i = 0; i < 300000; i++)
    {
        ordered_map.at(i);
    }
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Time (in milliseconds) to lookup in an ordered map: " << duration.count() << endl;

    start = high_resolution_clock::now();
    for (int i = 0; i < 300000; i++)
    {
        unordered_map.at(i);
    }
    stop = high_resolution_clock::now();

    duration = duration_cast<milliseconds>(stop - start);
    cout << "Time (in milliseconds) to lookup in an unordered map: " << duration.count() << endl;

    return 0;
}

/*  OUTPUT
    Time (in milliseconds) to lookup in an ordered map: 168
    Time (in milliseconds) to lookup in an unordered map: 32
*/