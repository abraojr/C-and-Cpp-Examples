#include <string>

using std::string;

class Animal
{
    int age;
    string latin_name;

public:
    Animal();
    ~Animal();

    void eat();
    void sleep();
    void drink();
};

class Dog : public Animal
{
    int dog_age; // age in dog years
public:
    void bark();
};

class Bear : public Animal
{
    int type; // black, brown, polar etc
public:
    void hibernate();
    void growl();
};

int main()
{
    Dog d;
    Bear b;
    Animal *a1 = &d;
    Animal &a2 = d;

    a1 = &b;

    return 0;
}