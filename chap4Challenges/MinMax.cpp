#include <iostream>
using namespace std;
int main()
{
    double input1;
    cout << "\nInput thy first number: ";
    cin >> input1;
    double input2;
    cout << "\nInput thy secound number: ";
    cin >> input2;
    if (input1 > input2)
    {
        cout << "\n"
             << input2 << " is bigger than " << input1;
    }
    else if (input1 < input2)
    {
        cout << "\n"
             << input2 << " is bigger than " << input1;
    }
    else if (input1 == input2)
    {
        cout << "\n"
             << input1 << " is equal to " << input2;
    }
}