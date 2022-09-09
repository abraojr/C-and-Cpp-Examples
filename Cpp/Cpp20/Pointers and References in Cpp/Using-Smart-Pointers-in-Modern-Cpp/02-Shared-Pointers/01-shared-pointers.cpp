#include <iostream>
#include <memory>
#include <string>

using std::cout;
using std::endl;
using std::make_shared;
using std::shared_ptr;
using std::string;

int main()
{
    // Pre C++14 style of initializing shared pointers
    shared_ptr<string> name_ptr_1{new string{"Justine"}};

    /*Modern style of initializing shared pointers - this function
    prevents some subtle memory leaks, and is more efficient*/
    shared_ptr<string> name_ptr_2{make_shared<string>("Mallory")};

    // Compact modern style of initializing shared pointers
    auto name_ptr_3{make_shared<string>("Rafael")};

    cout << "Name 1: " << *name_ptr_1 << endl;
    cout << "Name 2: " << *name_ptr_2 << endl;
    cout << "Name 3: " << *name_ptr_3 << endl;

    return 0;
}

/* OUTPUT
    Name 1: Justine
    Name 2: Mallory
    Name 3: Rafael
*/