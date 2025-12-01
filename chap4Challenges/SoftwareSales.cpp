
// commit comment
#include <iostream>
using namespace std;
int main()
{
    int packages;
    cout << "\nPackages: ";
    while (!(cin >> packages))
    {
        cout << "Try again. packages: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    if (10 > packages)
    {
        cout << "Your total is: $" << packages*199;
    }
    else if (10 <= packages && packages < 20)
    {
        cout << "Your total is: $" << packages*199*0.8;
    }
    else if (20 <= packages && packages < 50)
    {
        cout << "Your total is: $" << packages*199*0.7;
    }
    else if (50 <= packages && packages < 100)
    {
        cout << "Your total is: $" << packages*199*0.6;
    }
    else if (packages >= 100)
    {
        cout << "Your total is: $" << packages*199*0.5;
    }
    
}