#include <iostream>

#include "GradStudent.h"
#include "UndergradStudent.h"
#include "PhdStudent.h"

using std::cout;
using std::endl;
using std::exception;

void display_grad_student_details(const Student &student)
{
    try
    {
        const UndergradStudent &undergrad_student = dynamic_cast<const UndergradStudent &>(student);

        cout << "************** Undergrad Student **************" << endl;
        cout << "Name: " << undergrad_student.get_name()
             << ", major: " << undergrad_student.get_major()
             << ", tuition: " << undergrad_student.compute_tuition() << endl << endl;
    }
    catch (exception &ex)
    {
        cout << student.get_name() << " UndergradStudent &cast: " << ex.what() << endl;
    }

    try
    {
        const GradStudent &grad_student = dynamic_cast<const GradStudent &>(student);

        cout << "************** Grad Student **************" << endl;
        cout << "Name: " << grad_student.get_name()
             << ", has teaching assistantship: " << std::boolalpha
             << grad_student.has_teaching_assistantship()
             << ", tuition: " << grad_student.compute_tuition() << endl << endl;
    }
    catch (exception &ex)
    {
        cout << student.get_name() << " GradStudent &cast: " << ex.what() << endl;
    }

    try
    {
        const PhdStudent &phd_student = dynamic_cast<const PhdStudent &>(student);

        cout << "************** Phd Student **************" << endl;
        cout << "Name: " << phd_student.get_name()
             << ", has teaching assistantship: " << std::boolalpha
             << phd_student.has_teaching_assistantship()
             << ", has research assistantship: " << std::boolalpha
             << phd_student.has_research_assistantship()
             << ", tuition: " << phd_student.compute_tuition() << endl << endl;
    }
    catch (exception &ex)
    {
        cout << student.get_name() << " PhdStudent &cast: " << ex.what() << endl;
    }
}

int main()
{
    UndergradStudent bob{"Bob", "History"};
    GradStudent linda{"Linda", true};
    PhdStudent terry{"Terry", false, true};

    cout << "----------------------------------------------" << endl;
    display_grad_student_details(bob);

    cout << "----------------------------------------------" << endl;
    display_grad_student_details(linda);

    cout << "----------------------------------------------" << endl;
    display_grad_student_details(terry);

    return 0;
}

/* OUTPUT
    ----------------------------------------------
    ************** Undergrad Student **************
    Name: Bob, major: History, tuition: 240000

    Bob GradStudent &cast: std::bad_cast
    Bob PhdStudent &cast: std::bad_cast
    ----------------------------------------------
    Linda UndergradStudent &cast: std::bad_cast
    ************** Grad Student **************
    Name: Linda, has teaching assistantship: true, tuition: 18000

    Linda PhdStudent &cast: std::bad_cast
    ----------------------------------------------
    Terry UndergradStudent &cast: std::bad_cast
    ************** Grad Student **************
    Name: Terry, has teaching assistantship: false, tuition: 10500

    ************** Phd Student **************
    Name: Terry, has teaching assistantship: false, has research assistantship: true, tuition: 10500
*/