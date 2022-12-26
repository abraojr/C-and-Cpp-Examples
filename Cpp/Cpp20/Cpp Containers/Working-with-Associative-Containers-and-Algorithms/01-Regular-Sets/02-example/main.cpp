#include <iostream>
#include <set>

using std::cout;
using std::endl;
using std::greater;
using std::set;
using std::string;

void print_numbers(const set<int, greater<int>> &numbers_set)
{
    for (const int &number : numbers_set)
    {
        cout << number << " ";
    }

    cout << endl;
}

int main()
{
    set<int, greater<int>> numbers_set{303, 404, 707};

    cout << endl << "------------Original elements------------" << endl;
    print_numbers(numbers_set);

    numbers_set.insert(101);
    numbers_set.insert(808);

    cout << endl << "------------After adding 2 more elements------------" << endl;
    print_numbers(numbers_set);

    numbers_set.insert(303);
    numbers_set.insert(808);
    numbers_set.insert(909);

    cout << endl << "------------After adding some duplicate elements------------" << endl;
    print_numbers(numbers_set);

    numbers_set.erase(101);
    numbers_set.erase(333);

    cout << endl << "------------After erasing some existing and non-existing elements------------" << endl;
    print_numbers(numbers_set);

    return 0;
}

/* OUTPUT
    ------------Original elements------------
    707 404 303

    ------------After adding 2 more elements------------
    808 707 404 303 101

    ------------After adding some duplicate elements------------
    909 808 707 404 303 101

    ------------After erasing some existing and non-existing elements------------
    909 808 707 404 303
*/