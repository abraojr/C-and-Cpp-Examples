#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

template <typename T, typename Aggregate>
void compute_aggregation(const vector<T> &values, Aggregate aggregate)
{
    for (const T &val : values)
    {
        aggregate(val);
    }
}

template <typename T>
void print_values(vector<T> values)
{
    for (const T &val : values)
    {
        cout << val << " ";
    }

    cout << endl;
}

int main()
{
    vector<int> int_vector{12, 57, 90, 119, 456, 33, 91, 115, 220};

    cout << endl << "--------------Original Values--------------" << endl;
    print_values(int_vector);

    float total = 0;
    int count = 0;
    float average = 0;

    compute_aggregation(int_vector, [&](const int &elem){
        total = total + elem;
        count = count + 1;
        average = total / count; 
    });

    cout << endl << "--------------Statistics--------------" << endl;
    cout << "Total: " << total << endl;
    cout << "Count: " << count << endl;
    cout << "Average: " << average << endl;

    return 0;
}

/* OUTPUT
    --------------Original Values--------------
    12 57 90 119 456 33 91 115 220

    --------------Statistics--------------
    Total: 1193
    Count: 9
    Average: 132.556
*/