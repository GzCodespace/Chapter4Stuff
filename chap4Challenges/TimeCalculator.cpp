// commit comment
#include <iostream>
using namespace std;
int main()
{
    int seconds;
    cout << "\nSeconds: ";
    while (!(cin >> seconds))
    {
        cout << "Try again. Seconds: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    if (seconds > 86400)
    {
        cout << "There are " << seconds / 86400.0 << " days in that many seconds.";
    }
    else if (86400 > seconds > 3600)
    {
        cout << "There are " << seconds / 3600.0 << " hours in that many seconds.";
    }
    else if (3600 > seconds > 60)
    {
        cout << "There are " << seconds / 60.0 << " minutes in that many seconds.";
    }
    else if (seconds < 60)
    {
        cout << "There are " << seconds << " seconds in that many seconds.";
    }
    
}