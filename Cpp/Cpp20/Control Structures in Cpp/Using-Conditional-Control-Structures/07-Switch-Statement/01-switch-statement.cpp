#include <iostream>

using std::cin;
using std::cout;
using std::endl;

enum TaskStatus
{
    NOT_STARTED = 1,
    IN_PROGRESS,
    COMPLETED_SUCCESS,
    COMPLETED_FAILURE
};

int main()
{
    int status;

    cout << "Please enter the current status of the task: ";
    cin >> status;

    switch (status)
    {
    case NOT_STARTED:
        cout << "The task has not yet been started" << endl;
        break;
    case IN_PROGRESS:
        cout << "The task is in progress" << endl;
        break;
    case COMPLETED_SUCCESS:
        cout << "The task was completed successfully" << endl;
        break;
    case COMPLETED_FAILURE:
        cout << "The task could not be completed successfully" << endl;
        break;
    default:
        cout << "Status of task unknown" << endl;
    }

    return 0;
}

/* OUTPUT
    ## test 1 ##
    Please enter the current status of the task:
    1
    The task has not yet been started

    ## test 2 ##
    Please enter the current status of the task:
    3
    The task was completed successfully

    ## test 3 ##
    Please enter the current status of the task:
    0
    Status of task unknown
*/
