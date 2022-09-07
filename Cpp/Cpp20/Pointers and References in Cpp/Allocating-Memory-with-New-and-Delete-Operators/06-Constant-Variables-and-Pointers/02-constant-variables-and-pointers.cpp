#include <iostream>

using std::cout;
using std::endl;

int main()
{
    float linda_gpa = 3.4f;
    float megan_gpa = 3.7f;

    float *gpa_ptr = &linda_gpa;

    cout << "gpa_ptr (Linda): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Linda): " << *gpa_ptr << endl;

    cout << "--------Updated value--------" << endl;
    *gpa_ptr = 4.0f;

    cout << "gpa_ptr (Linda): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Linda): " << *gpa_ptr << endl;
    cout << "Linda gpa: " << linda_gpa << endl;

    cout << "--------Updated value--------" << endl;
    gpa_ptr = &megan_gpa;

    cout << "gpa_ptr (Megan): " << gpa_ptr << endl;
    cout << "gpa_ptr value (Megan): " << *gpa_ptr << endl;

    return 0;
}

/* OUTPUT
    gpa_ptr (Linda): 0x5052f8
    gpa_ptr value (Linda): 3.4
    --------Updated value--------
    gpa_ptr (Linda): 0x5052f8
    gpa_ptr value (Linda): 4
    Linda gpa: 4
    --------Updated value--------
    gpa_ptr (Megan): 0x5052f4
    gpa_ptr value (Megan): 3.7
*/