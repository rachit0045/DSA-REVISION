#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;
    if (num < 0)
    {
        cout << "please enter the positive number.";
        return 0;
    }
    if (num > 99 && num < 1000)
    {
        cout << num << " is three digit number." << endl;
    }
    else
    {
        cout << num << " is not three digit number.";
    }

    return 0;
}