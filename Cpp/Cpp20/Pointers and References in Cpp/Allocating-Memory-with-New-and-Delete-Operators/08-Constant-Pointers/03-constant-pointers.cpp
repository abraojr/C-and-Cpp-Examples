#include <iostream>

using std::cout;
using std::endl;

int main()
{
    float linda_gpa = 3.4f;
    float const *const gpa_ptr = &linda_gpa;

    cout << "gpa_ptr (Linda): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Linda): " << *gpa_ptr << endl;

    float megan_gpa = 3.7f;

    // cout << "-------Update pointer (this is not allowed)-------" << endl;
    // gpa_ptr = &megan_gpa;

    // cout << "-------Update value (this is not allowed)-------" << endl;
    // *gpa_ptr = 4.0f;

    return 0;
}

/* OUTPUT
    gpa_ptr (Linda): 0x5052a8
    gpa_ptr value (Linda): 3.4
*/