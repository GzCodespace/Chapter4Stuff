// commit comment
#include <iostream>
using namespace std;
int main()
{
    int books;
    cout << "\nBooks Bought: ";
    while (!(cin >> books))
    {
        cout << "Try again. Books Bought: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    switch (books)
    {
    case 0:
        cout << "You got 0 points!";
        break;
    case 1:
        cout << "You got 5 points!";
        break;
    case 2:
        cout << "You got 15 points!";
        break;
    case 3:
        cout << "You got 30 points!";
        break;
    default:
        cout<<"You got 50 points!";
        break;
    }
}