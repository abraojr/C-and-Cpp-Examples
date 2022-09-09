#include <iostream>
#include <memory>
#include <string>

using std::cout;
using std::endl;
using std::make_shared;
using std::shared_ptr;
using std::string;
using std::weak_ptr;

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

    ~Person()
    {
        cout << "Destructing person " << name << endl;
    }
};

int main()
{
    shared_ptr<Person> nina_ptr{make_shared<Person>("Nina")};
    shared_ptr<Person> person_sp = nina_ptr;

    cout << "nina_ptr: " << nina_ptr->get_name() << endl;

    weak_ptr<Person> person_wp = nina_ptr;

    if (auto temp_sp = person_wp.lock())
    {
        cout << "temp_sp: " << temp_sp->get_name() << endl;
    }

    return 0;
}

/* OUTPUT
    Constructing person Nina
    nina_ptr: Nina
    temp_sp: Nina
    Destructing person Nina
*/