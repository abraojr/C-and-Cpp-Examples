#include <iostream>

#include "Browser.h"
#include "BrowserException.h"
#include "InvalidInputException.h"
#include "MalformedUrlException.h"
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

        while (num_urls < 4)
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
    // All these catch blocks can be replaced by catch(...)
    catch (MalformedUrlException &ex)
    {
        cout << ex.what() << endl;
        cout << "Navigation NOT successful (MalformedUrlException thrown)" << endl;
    }
    catch (InvalidInputException &ex)
    {
        cout << ex.what() << endl;
        cout << "Input was not valid (InvalidInputException thrown)" << endl;
    }
    catch (BrowserException &ex)
    {
        cout << ex.what() << endl;
        cout << "Something went wrong (BrowserException thrown)" << endl;
    }
    catch (NavigationException &ex)
    {
        cout << ex.what() << endl;
        cout << "Navigation NOT successful (NavigationException thrown)" << endl;
    }

    return 0;
}

/* OUTPUT #1
    Please enter a URL: https://www.cnn.com
    Opened url: https://www.cnn.com
    Please enter a URL: https://www.nyt.com
    Opened url: https://www.nyt.com
    Please enter a URL: https://www.bloomberg.com
    Opened url: https://www.bloomberg.com
    Please enter a URL: https://www.wsj.com
    Opened url: https://www.wsj.com
    How far back to navigate?: 2
    Navigating to: https://www.bloomberg.com
    Navigating to: https://www.nyt.com
    Navigation successful, final URL: https://www.nyt.com
*/

/* OUTPUT #2
    Please enter a URL: www.google.com
    Could not navigate to malformed URL: www.google.com
    Navigation NOT successful (MalformedUrlException thrown)
*/

/* OUTPUT #3
    Please enter a URL: http://google.com
    Opened url: http://google.com
    Please enter a URL: http://cnn.com
    Opened url: http://www.cnn.com
    Please enter a URL: https://www.nyt.com
    Opened url: https://www.nyt.com
    Please enter a URL: https://www.wsj.com
    Opened url: https://www.wsj.com
    How far back to navigate?: -4
    Input argument 'times' cannot be less than 0
    Input was not valid (InvalidInputException thrown)
*/

/* OUTPUT #4
    Please enter a URL: https://www.cnn.com
    Opened url: https://www.cnn.com
    Please enter a URL: https://www.nyt.com
    Opened url: https://www.nyt.com
    Please enter a URL: https://www.bloomberg.com
    Opened url: https://www.bloomberg.com
    Please enter a URL: https://www.wsj.com
    Opened url: https://www.wsj.com
    How far back to navigate?: 20
    Navigating to: https://www.bloomberg.com
    Navigating to: https://www.nyt.com
    Navigating to: https://www.cnn.com
    Could not navigate back, out of URL history range
    Navigation NOT successful (NavigationException thrown)
*/

/* OUTPUT #5 (if we change the while condition to < 5)
    Please enter a URL: https://www.cnn.com
    Opened url: https://www.cnn.com
    Please enter a URL: https://www.nyt.com
    Opened url: https://www.nyt.com
    Please enter a URL: https://www.bloomberg.com
    Opened url: https://www.bloomberg.com
    Please enter a URL: https://www.wsj.com
    Opened url: https://www.wsj.com
    Please enter a URL: https://www.google.com
    History size limited on this browser
    Something went wrong (BrowserException thrown)
*/