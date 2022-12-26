#include <iostream>
#include <unordered_set>

using std::cout;
using std::endl;
using std::string;
using std::unordered_set;

void print_numbers(const unordered_set<int> &numbers_set)
{
    for (const int &number : numbers_set)
    {
        cout << number << " ";
    }

    cout << endl;
}

int main()
{
    unordered_set<int> uo_numbers_set{10, 80, 50, 40, 90, 20, 10, 70, 60};

    cout << endl << "------------Original elements unordered set------------" << endl;
    print_numbers(uo_numbers_set);

    cout << "Number of buckets: " << uo_numbers_set.bucket_count() << endl;
    cout << "Maximum number of buckets: " << uo_numbers_set.max_bucket_count() << endl;

    cout << "Number of elements in bucket 2: " << uo_numbers_set.bucket_size(2) << endl;
    cout << "Number of elements in bucket 4: " << uo_numbers_set.bucket_size(4) << endl;
    cout << "Bucket that holds number 80: " << uo_numbers_set.bucket(80) << endl;

    return 0;
}

/* OUTPUT
    ------------Original elements unordered set------------
    60 70 20 90 40 50 80 10
    Number of buckets: 11
    Maximum number of buckets: 576460752303423487
    Number of elements in bucket 2: 1
    Number of elements in bucket 4: 1
    Bucket that holds number 80: 3
*/