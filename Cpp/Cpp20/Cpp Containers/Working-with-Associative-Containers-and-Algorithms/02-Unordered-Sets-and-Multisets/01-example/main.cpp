#include <iostream>
#include <set>
#include <unordered_set>

using std::cout;
using std::endl;
using std::set;
using std::string;
using std::unordered_set;

void print_numbers(const set<int> &numbers_set)
{
    for (const int &number : numbers_set)
    {
        cout << number << " ";
    }

    cout << endl;
}

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
    set<int> numbers_set{10, 80, 50, 40, 90, 20, 10, 70, 60};
    unordered_set<int> unordered_numbers_set{10, 80, 50, 40, 90, 20, 10, 70, 60};

    cout << endl << "------------Original elements set------------" << endl;
    print_numbers(numbers_set);

    cout << endl << "------------Original elements unordered set------------" << endl;
    print_numbers(unordered_numbers_set);

    return 0;
}

/* OUTPUT
    ------------Original elements set------------
    10 20 40 50 60 70 80 90

    ------------Original elements unordered set------------
    60 70 20 90 40 50 80 10
*/