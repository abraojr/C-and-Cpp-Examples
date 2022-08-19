#include <iostream>

using std::cout;

/*
switch on integral or enumeration type:

switch(expression-condition){
    case constant-value: statement;
    break;
    default: statement;
}
*/

int main()
{
    int i = 1;
    switch (i)
    {
    case 1:
        cout << "one\n";
        break;
    case 2:
        cout << "two\n";
        break;
    default:
        cout << "some other number\n";
    }

    enum class direction
    {
        north,
        south,
        east,
        west
    };

    direction my_move = direction::north;

    switch (my_move)
    {
    case direction::north:
        cout << "go north\n";
        break;
    case direction::south:
        cout << "go south\n";
        break;
    case direction::east:
        cout << "go east\n";
        break;
    case direction::west:
        cout << "go west\n";
        break;
    }

    return 0;
}

/* OUTPUT
    one
    go north
*/