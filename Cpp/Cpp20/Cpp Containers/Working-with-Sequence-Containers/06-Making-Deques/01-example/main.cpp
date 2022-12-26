#include <deque>
#include <iostream>

using std::cout;
using std::deque;
using std::endl;
using std::string;

int main()
{
    deque<string> names_deque{2};

    names_deque.push_back("Lucy");
    names_deque.push_back("Sam");
    names_deque.push_back("Fred");
    names_deque.push_back("Ophelia");
    names_deque.push_back("Rob");

    cout << "---------------Size---------------" << endl;

    cout << "Size of deque: " << names_deque.size() << endl;
    cout << "Maximum size of deque: " << names_deque.max_size() << endl;
    // cout << "Allocated capacity: " << names_deque.capacity() << endl;
    cout << "Is deque empty: " << std::boolalpha << names_deque.empty() << endl;

    cout << "---------------Contents---------------" << endl;

    for (auto &name : names_deque)
    {
        cout << name << endl;
    }

    cout << "---------------Random Access with operator[]---------------" << endl;
    cout << "Element at index 3: " << names_deque[3] << endl;

    cout << "---------------Random Access with at()---------------" << endl;
    cout << "Element at index 4: " << names_deque.at(4) << endl;

    return 0;
}

/*  OUTPUT
    ---------------Size---------------
    Size of deque: 7
    Maximum size of deque: 288230376151711743
    Is deque empty: false
    ---------------Contents---------------


    Lucy
    Sam
    Fred
    Ophelia
    Rob
    ---------------Random Access with operator[]---------------
    Element at index 3: Sam
    ---------------Random Access with at()---------------
    Element at index 4: Fred
*/