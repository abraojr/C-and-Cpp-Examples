#include <iostream>
#include <set>
#include <unordered_set>

using std::cout;
using std::endl;
using std::multiset;
using std::string;
using std::unordered_multiset;

void print_numbers(const multiset<int> &numbers_set)
{
    for (const int &number : numbers_set)
    {
        cout << number << " ";
    }

    cout << endl;
}

void print_numbers(const unordered_multiset<int> &numbers_set)
{
    for (const int &number : numbers_set)
    {
        cout << number << " ";
    }

    cout << endl;
}

int main()
{
    multiset<int> numbers_set{10, 10, 80, 50, 40, 90, 90, 20, 10, 70, 60, 60};
    unordered_multiset<int> unordered_numbers_set{10, 10, 80, 50, 40, 90, 90, 20, 10, 70, 60, 60};

    cout << endl << "------------Original elements set------------" << endl;
    print_numbers(numbers_set);

    cout << endl << "------------Original elements unordered set------------" << endl;
    print_numbers(unordered_numbers_set);

    cout << endl << "---------Element counts---------" << endl;
    cout << "Count of element 10 (ordered set): " << numbers_set.count(10) << endl;
    cout << "Count of element 10 (unordered set): " << unordered_numbers_set.count(10) << endl;

    return 0;
}

/* OUTPUT
    ------------Original elements set------------
    10 10 10 20 40 50 60 60 70 80 90 90

    ------------Original elements unordered set------------
    60 60 70 20 90 90 40 50 80 10 10 10

    ---------Element counts---------
    Count of element 10 (ordered set): 3
    Count of element 10 (unordered set): 3
*/