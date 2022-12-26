#include <iostream>
#include <set>

using std::cout;
using std::endl;
using std::set;
using std::string;

void print_numbers(const set<int> &numbers_set)
{
    for (const int &number : numbers_set)
    {
        cout << number << " ";
    }

    cout << endl;
}

int main()
{
    set<int> numbers_set{10, 80, 50, 10, 90, 20, 10, 70, 70};

    cout << endl << "------------Original elements------------" << endl;
    print_numbers(numbers_set);

    cout << endl << "------------Deleting the elements from 70 to the end------------" << endl;

    auto pos_of_70 = numbers_set.find(70);
    numbers_set.erase(pos_of_70, numbers_set.end());

    print_numbers(numbers_set);

    cout << endl << "------------Element counts (1 or 0)------------" << endl;
    cout << "Count of element 10: " << numbers_set.count(10) << endl;
    cout << "Count of element 33: " << numbers_set.count(33) << endl;

    return 0;
}

/* OUTPUT
    ------------Original elements------------
    10 20 50 70 80 90

    ------------Deleting the elements from 70 to the end------------
    10 20 50

    ------------Element counts (1 or 0)------------
    Count of element 10: 1
    Count of element 33: 0
*/