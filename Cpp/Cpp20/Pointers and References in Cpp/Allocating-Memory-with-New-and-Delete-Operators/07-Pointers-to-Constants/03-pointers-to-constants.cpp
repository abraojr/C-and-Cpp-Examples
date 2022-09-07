#include <iostream>

using std::cout;
using std::endl;

int main()
{
    float linda_gpa = 3.4f;
    float const *gpa_ptr = &linda_gpa;

    cout << "gpa_ptr (Linda): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Linda): " << *gpa_ptr << endl;

    // cout << "-------Updated value through pointer (not allowed)-------" << endl;
    // *gpa_ptr = 4.0f;

    cout << "-------Updated value using variable (allowed)-------" << endl;
    linda_gpa = 4.0f;

    cout << "gpa_ptr value after update (Linda): " << *gpa_ptr << endl;

    return 0;
}

/* OUTPUT
    gpa_ptr (Linda): 0x505308
    gpa_ptr value (Linda): 3.4
    -------Updated value using variable (allowed)-------
    gpa_ptr value after update (Linda): 4
*/