#include <iostream>
#include <memory>
#include <string>

using std::cout;
using std::endl;
using std::make_shared;
using std::shared_ptr;
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

    Person(string n) : name(n)
    {
        cout << "Constructing person " << name << endl;
    }

    string get_name() { return name; }

    void set_name(string n) { name = n; }

    ~Person()
    {
        cout << "Destructing person " << name << endl;
    }
};

int main()
{
    shared_ptr<Person> person_ptr{make_shared<Person>()};
    shared_ptr<Person> nina_ptr{make_shared<Person>("Nina")};

    cout << "------------------" << endl;
    cout << "Person's name: " << person_ptr->get_name() << endl;
    cout << "Nina's name: " << nina_ptr->get_name() << endl;
    cout << "------------------" << endl;

    return 0;
}

/* OUTPUT
    Constructing person
    Constructing person Nina
    ------------------
    Person's name:
    Nina's name: Nina
    ------------------
    Destructing person Nina
    Destructing person
*/