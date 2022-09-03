#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

constexpr int string_hash(const string &str)
{
    int hash = 0;
    for (size_t i = 0; i < str.size(); ++i)
    {
        hash = hash * 31 + static_cast<int>(str[i]);
    }

    return hash;
}

int main()
{
    string status;
    cout << "Please enter the current status of the task: ";
    getline(cin, status);

    /*NOTE: Precomputed hashes for valid statuses
      815402773 "not_started"
      -753541113 "in_progress"
      -1671667185 "completed_success"
      -891071594 "completed_failure"
    */

    switch (int status_hash = string_hash(status); status_hash)
    {
    case 815402773:
        cout << "The task has not yet been started" << endl;
        break;
    case -753541113:
        cout << "The task is in progress" << endl;
        break;
    case -1671667185:
        cout << "The task was completed successfully" << endl;
        break;
    case -891071594:
        cout << "The task could not be completed successfully" << endl;
        break;
    default:
        cout << "Status of task unknown" << endl;
    }

    return 0;
}

/* OUTPUT
    ## test 1 ##
    Please enter the current status of the task: completed_failure
    The task could not be completed successfully

    ## test 2 ##
    Please enter the current status of the task: lol
    Status of task unknown
*/