// commit comment
#include <iostream>
using namespace std;
int main()
{
    int option;
    double length;
    cout << "\n1. Area of a circle";
    cout << "\n2. Area of a rectangle";
    cout << "\n3. Area of a triangle";
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
        double radius;
        cout << "Radius: ";
        while (!(cin >> radius))
        {
            cout << "Try again. Radius: ";
            cin.clear();
            cin.ignore(100, '\n');
        }
        cout << "The area is " << (3.14159) * (radius * radius);
        break;
    case 2:
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
        cout << "The area is " << width * length;
        break;
    case 3:
        double height;
        cout << "Length: ";
        while (!(cin >> length))
        {
            cout << "Try again. Length: ";
            cin.clear();
            cin.ignore(100, '\n');
        }
        cout << "Height: ";
        while (!(cin >> height))
        {
            cout << "Try again. Height: ";
            cin.clear();
            cin.ignore(100, '\n');
        }
        cout << "The area is " << (length * height)/2;
        break;
    case 4:
        cout << "Bye";
        break;
    }
}