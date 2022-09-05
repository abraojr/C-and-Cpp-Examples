#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Person
{
private:
    string name;

public:
    Person()
    {
        // Does important stuff to initialize Person
        cout << "Constructing person" << endl;
    }

    ~Person()
    {
        // Does important stuff to clean up Person
        cout << "Destructing person" << endl;
    }
};

int main()
{
    cout << "Creating an object should run the constructor" << endl;
    Person *person_ptr{new Person{}};

    cout << "Freeing an object should run the destructor" << endl;
    delete person_ptr;

    return 0;
}

/* OUTPUT
    Creating an object should run the constructor
    Constructing person
    Freeing an object should run the destructor
    Destructing person
*/