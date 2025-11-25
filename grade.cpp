#include <iostream>
using namespace std;
int main()
{
    cout << "What is your grade:";
    double grade;
    char result;
    double input;
    while (!(cin >> input)){
        cout << "Try again. Your grade is: \n";
        cin.clear();
        cin.ignore(100, '\n');

    }
    if (grade > 90.5) result = 'A';
    if (grade > 70 && grade < 90.5  ) result = 'B';
    if (grade < 70 && grade >= 65  ) result = 'C';
    if (grade < 65) result = 'S';
    
    
    cout << "Your grade is: " << result;


}