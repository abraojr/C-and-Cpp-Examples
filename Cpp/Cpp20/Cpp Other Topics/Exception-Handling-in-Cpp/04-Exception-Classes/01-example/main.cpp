#include <iostream>
#include <exception>

#include "Browser.h"

using std::cin;
using std::cout;
using std::endl;
using std::invalid_argument;
using std::out_of_range;
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
        // firefox.open_url("www.youtube.com");

        cout << "How far back to navigate?: ";
        int times;
        cin >> times;

        string final_url_navigated_to = firefox.back(times);
        cout << "Navigation successful, final URL: " << final_url_navigated_to << endl;
    }
    catch (invalid_argument &inv_arg_ex)
    {
        cout << inv_arg_ex.what() << endl;
        cout << "Navigation NOT successful (invalid_argument exception)" << endl;
    }
    catch (out_of_range &out_of_range_ex)
    {
        cout << out_of_range_ex.what() << endl;
        cout << "Navigation backward NOT successful (out_of_range exception)" << endl;
    }

    return 0;
}

/* OUTPUT #1
    How far back to navigate?: 2
    Navigating to: https://www.bloomberg.com
    Navigating to: https://www.nyt.com
    Navigation successful, final URL: https://www.nyt.com
*/

/* OUTPUT #2
    How far back to navigate?: -3
    Input argument 'times' cannot be less than 0
    Navigation NOT successful (invalid_argument exception)
*/

/* OUTPUT #3
    How far back to navigate?: 10
    Navigating to: https://www.bloomberg.com
    Navigating to: https://www.nyt.com
    Navigating to: https://www.cnn.com
    Could not navigate back, out of URL history range
    Navigation backward NOT successful (out_of_range exception)
*/

/* OUTPUT #4 (when line 23 is uncommented)
    Could not navigate to malformed URL: www.youtube.com
    Navigation NOT successful (invalid_argument exception)
*/