#include <iostream>

#include "Browser.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    Browser firefox;

    firefox.open_url("www.cnn.com");
    firefox.open_url("www.nyt.com");
    firefox.open_url("www.bloomberg.com");
    firefox.open_url("www.wsj.com");

    cout << "How far back to navigate?: ";
    int times;
    cin >> times;

    try
    {
        string final_url_navigated_to = firefox.back(times);
        cout << "Navigation successful, final URL: " << final_url_navigated_to << endl;
    }
    catch (string message)
    {
        cout << message << endl;
        cout << "Navigation NOT successful" << endl;
    }

    return 0;
}

/* OUTPUT
    How far back to navigate?: 7
    Navigating to: www.bloomberg.com
    Navigating to: www.nyt.com
    Navigating to: www.cnn.com
    Unable to navigate backward any further!
    Navigation NOT successful
*/