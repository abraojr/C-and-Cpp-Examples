#include <iostream>

#include "Browser.h"
#include "BrowserException.h"
#include "InvalidInputException.h"
#include "NavigationException.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    Browser firefox;

    try
    {
        int num_urls = 0;
        string url;

        while (num_urls < 3)
        {
            cout << "Please enter a URL: ";
            cin >> url;

            firefox.open_url(url);
            cout << "Opened url: " << url << endl;

            num_urls++;
        }

        cout << "How far back to navigate?: ";
        int times;
        cin >> times;

        string final_url_navigated_to = firefox.back(times);
        cout << "Navigation successful, final URL: " << final_url_navigated_to << endl;
    }
    catch (BrowserException ex)
    {
        cout << ex.what() << endl;
        cout << "Something went wrong, exception thrown" << endl;
    }

    return 0;
}

/* OUTPUT #1
    Please enter a URL: www.wrong.com
    BrowserException::what()
    Could not navigate to malformed URL: www.wrong.com
    Something went wrong, exception thrown
*/

/* OUTPUT #2 (when we change the parameter of the catch block in line 42 to be of type reference (&ex))
    Please enter a URL: www.wrong.com
    InvalidInputException::what()
    url
    Something went wrong, exception thrown
*/