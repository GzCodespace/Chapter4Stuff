// commit comment
#include <iostream>
using namespace std;
int main()
{
    int option;
    cout << "\n1. Area of a circle";
    cout << "\n2. Area of a circle";
    cout << "\n3. Area of a circle";
    cout << "\n4. Quit";
    cout << "\nOption: ";

    while (!(cin >> option) || option > 4 || option < 1)
    {
        cout << "Try again. Option: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    switch (option)
    {
    case 1:
        cout << "You got 0 points!";
        break;
    case 2:
        double length;
        double width;
        cout << "Length: ";
        while (!(cin >> length))
        {
            cout << "Try again. Length: ";
            cin.clear();
            cin.ignore(100, '\n');
        }
        cout << "Width: ";
        while (!(cin >> width))
        {
            cout << "Try again. Width: ";
            cin.clear();
            cin.ignore(100, '\n');
        }
        cout << "The area is "
        break;
    case 3:
        cout << "You got 15 points!";
        break;
    case 4:
        cout << "You got 30 points!";
        break;
    }
}