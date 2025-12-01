//commit comment
#include <iostream>
using namespace std;
int main()
{
    int day;
    int month;
    int year;
    cout << "\n Day: ";
    while (!(cin >> day) || day > 31){
        cout << " Try again. Day: ";
        cin.clear();
        cin.ignore(100, '\n');

    }
    cout << " Month: ";
    while (!(cin >> month) || month > 12){
        cout << " Try again. Month: ";
        cin.clear();
        cin.ignore(100, '\n');

    }
    cout << " Year (19##/20##): ";
    while (!(cin >> year) || year > 99 || year < 9){
        cout << " Try again. Year (19##/20##): ";
        cin.clear();
        cin.ignore(100, '\n');

    }

    if (day*month == year){
        cout << " Magic date. BEGONE WITCHCRAFT.";
    } else {
        cout << " Not an ounce of magic in that day.";    
    }
    


}