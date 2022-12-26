#include <chrono>
#include <iostream>
#include <deque>
#include <vector>

using std::cout;
using std::deque;
using std::endl;
using std::vector;
using namespace std::chrono;

int main()
{
    vector<int> int_vector = {10, 20, 30, 40, 50};
    deque<int> int_deque = {10, 20, 30, 40, 50};

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
        int_deque.insert(int_deque.begin(), i);
    }
    stop = high_resolution_clock::now();

    duration = duration_cast<milliseconds>(stop - start);
    cout << "Time (in milliseconds) to perform insertions in deque: " << duration.count() << endl;

    return 0;
}

/*  OUTPUT
    Time (in milliseconds) to perform insertions in vector: 530
    Time (in milliseconds) to perform insertions in deque: 4
*/