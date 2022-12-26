#include <exception>
#include <iostream>

#include "Browser.h"
#include "BrowserException.h"
#include "InvalidInputException.h"
#include "NavigationException.h"

using std::cin;
using std::cout;
using std::endl;
using std::exception;
using std::string;

void manage_navigation(Browser &browser, string url)
{
    try
    {
        browser.open_url(url);
        cout << "Opened url: " << url << endl;
    }
    catch (BrowserException &ex)
    {
        cout << "Exception while opening url" << endl;

        throw ex;
    }
};

void manage_back_navigation(Browser &browser, int times)
{
    try
    {
        string final_url_navigated_to = browser.back(times);
        cout << "Navigation successful, final URL: " << final_url_navigated_to << endl;
    }
    catch (BrowserException &ex)
    {
        cout << "Navigation backward failed" << endl;

        throw ex;
    }
};

int main()
{
    Browser firefox;

    int num_urls = 0;
    string url;

    try
    {

        while (num_urls < 3)
        {
            cout << "Please enter a URL: ";
            cin >> url;

            manage_navigation(firefox, url);

            num_urls++;
        }

        cout << "How far back to navigate?: ";
        int times;
        cin >> times;

        manage_back_navigation(firefox, times);
    }
    catch (exception &ex)
    {
        cout << "A bad exception occurred: " << ex.what() << endl;
    }

    return 0;
}

/* OUTPUT #1
    Please enter a URL: wrong.com
    Exception while opening url
    A bad exception occurred: BrowserException::what()
    Could not navigate to malformed URL: wrong.com
*/

/* OUTPUT #2 (if we remove 'ex' from the throw keywords in lines 26 and 41)
    Please enter a URL: www.wrong.com
    Exception while opening url
    A bad exception occurred: InvalidInputException::what()
    url
*/
