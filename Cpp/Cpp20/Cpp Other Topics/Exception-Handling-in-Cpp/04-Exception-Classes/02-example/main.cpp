#include <iostream>
#include <exception>

#include "Browser.h"

using std::cin;
using std::cout;
using std::endl;
using std::exception;
using std::string;

int main()
{
    Browser firefox;

    try
    {
        firefox.open_url("https://www.cnn.com");
        firefox.open_url("https://www.nyt.com");
        firefox.open_url("https://www.bloomberg.com");
        firefox.open_url("https://www.wsj.com");

        cout << "How far back to navigate?: ";
        int times;
        cin >> times;

        string final_url_navigated_to = firefox.back(times);
        cout << "Navigation successful, final URL: " << final_url_navigated_to << endl;
    }
    catch (exception &ex)
    {
        cout << ex.what() << endl;
        cout << "Navigation NOT successful" << endl;
    }

    return 0;
}

/* OUTPUT #1
    How far back to navigate?: -3
    Input argument 'times' cannot be less than 0
    Navigation NOT successful
*/

/* OUTPUT #2
    How far back to navigate?: 10
    Navigating to: https://www.bloomberg.com
    Navigating to: https://www.nyt.com
    Navigating to: https://www.cnn.com
    Could not navigate back, out of URL history range
    Navigation NOT successful
*/