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
    list<int> int_list = {10, 20, 30, 40, 50};

    auto start = high_resolution_clock::now();
    for (int i = 0; i < 100000; i++)
    {
        int_vector.insert(int_vector.begin(), i);
    }
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "Time (in milliseconds) to perform insertions in vector: " << duration.count() << endl;

    start = high_resolution_clock::now();
    for (int i = 0; i < 100000; i++)
    {
        int_list.insert(int_list.begin(), i);
    }
    stop = high_resolution_clock::now();

    duration = duration_cast<milliseconds>(stop - start);
    cout << "Time (in milliseconds) to perform insertions in list: " << duration.count() << endl;

    return 0;
}

/*  OUTPUT
    Time (in milliseconds) to perform insertions in vector: 331
    Time (in milliseconds) to perform insertions in list: 9
*/