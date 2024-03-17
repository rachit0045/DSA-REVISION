#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the positive number :";
    cin >> num;
    if (num < 0)
    {
        cout << "please enter the positive number ";
        return 0;
    }
    if (num % 2 == 0)
    {
        cout << num << " is even number." << endl;
    }
    else
    {
        cout << num << " is odd number." << endl;
    }
    return 0;
}