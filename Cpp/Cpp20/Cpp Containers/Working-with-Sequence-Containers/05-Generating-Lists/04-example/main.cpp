#include <chrono>
#include <iostream>
#include <list>
#include <vector>

using std::cout;
using std::endl;
using std::list;
using std::vector;
using namespace std::chrono;

int main()
{
    vector<int> int_vector = {10, 20, 30, 40, 50};
    for (int i = 0; i < 100000; i++)
    {
        int_vector.insert(int_vector.begin(), i);
    }

    list<int> int_list = {10, 20, 30, 40, 50};
    for (int i = 0; i < 100000; i++)
    {
        int_list.insert(int_list.begin(), i);
    }

    auto start = high_resolution_clock::now();
    for (int i = 0; i < 100000; i++)
    {
        int_vector.erase(int_vector.begin());
    }
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Time (in milliseconds) to perform erase in vector: " << duration.count() << endl;

    start = high_resolution_clock::now();
    for (int i = 0; i < 100000; i++)
    {
        int_list.erase(int_list.begin());
    }
    stop = high_resolution_clock::now();

    duration = duration_cast<milliseconds>(stop - start);
    cout << "Time (in milliseconds) to perform erase in list: " << duration.count() << endl;

    return 0;
}

/*  OUTPUT
    Time (in milliseconds) to perform erase in vector: 494
    Time (in milliseconds) to perform erase in list: 9
*/