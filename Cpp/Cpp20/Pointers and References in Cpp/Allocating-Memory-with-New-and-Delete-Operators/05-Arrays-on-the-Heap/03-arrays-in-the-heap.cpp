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
        cout << "Constructing person" << endl;
    }

    ~Person()
    {
        cout << "Destructing person" << endl;
    }
};

int main()
{
    const int size = 3;
    Person *person_arr = new Person[size]{};

    delete[] person_arr;
    person_arr = nullptr;

    return 0;
}

/* OUTPUT
    Constructing person
    Constructing person
    Constructing person
    Destructing person
    Destructing person
    Destructing person
*/