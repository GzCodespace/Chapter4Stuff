#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name1;
    cout << "\nInput first racers name: ";
    cin >> name1;
    double time1;
    cout << "Input "<< name1 <<"'s time : ";
     while (!(cin >> time1))
    {
        cout << "Try again. Time: ";
        cin.clear();
        cin.ignore(100, '\n');
    }
    string name2;
    cout << "\nInput second racers name: ";
    cin >> name2;
    double time2;
    cout << "Input "<<name2<<"'s time : ";
     while (!(cin >> time2))
    {
        cout << "Try again. Time: ";
        cin.clear();
        cin.ignore(200, '\n');
    }
    string name3;
    cout << "\nInput third racers name: ";
    cin >> name3;
    double time3;
    cout << "Input "<<name3<<"'s time : ";
     while (!(cin >> time3))
    {
        cout << "Try again. Time: ";
        cin.clear();
        cin.ignore(300, '\n');
    }
    cout<<time1<<time2<<time3;
    if (time1 < time2 && time2 < time3){
            cout << "\n" << name1 << " was first.";
            cout << "\n" << name2 << " was second.";
            cout << "\n" << name3 << " was last.";
    } 
    if (time1 < time2 && time2 > time3){
            cout << "\n" << name1 << " was first.";
            cout << "\n" << name3 << " was second.";
            cout << "\n" << name2 << " was last.";
    } 
    if (time1 > time2 && time2 > time3){
            cout << "\n" << name3 << " was first.";
            cout << "\n" << name2 << " was second.";
            cout << "\n" << name1 << " was last.";
    }
    
}