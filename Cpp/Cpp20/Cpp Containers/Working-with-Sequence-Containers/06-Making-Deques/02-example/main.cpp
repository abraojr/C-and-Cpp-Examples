#include <deque>
#include <iostream>

using std::cout;
using std::deque;
using std::endl;
using std::string;

void print_names(const deque<string> &names_deque)
{
    for (const string &name : names_deque)
    {
        cout << name << " ";
    }
    cout << endl;
}

int main()
{
    deque<string> names_deque{"Samuel", "Henrietta", "Harold"};

    cout << "------------------Front and back of the deque------------------" << endl;
    cout << "Front: " << names_deque.front() << endl;
    cout << "Back: " << names_deque.back() << endl;

    names_deque.push_front("Mason");

    cout << "------------------Contents (after push front)------------------" << endl;
    print_names(names_deque);

    names_deque.push_back("Gina");

    cout << "------------------Contents (after push back)------------------" << endl;
    print_names(names_deque);

    names_deque.pop_front();

    cout << "------------------Contents (after pop front)------------------" << endl;
    print_names(names_deque);

    names_deque.pop_back();

    cout << "------------------Contents (after pop back)------------------" << endl;
    print_names(names_deque);

    return 0;
}

/*  OUTPUT
    ------------------Front and back of the deque------------------
    Front: Samuel
    Back: Harold
    ------------------Contents (after push front)------------------
    Mason Samuel Henrietta Harold
    ------------------Contents (after push back)------------------
    Mason Samuel Henrietta Harold Gina
    ------------------Contents (after pop front)------------------
    Samuel Henrietta Harold Gina
    ------------------Contents (after pop back)------------------
    Samuel Henrietta Harold
*/