#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter the number :";
    cin >> num;
    if (num < 0)
    {
        cout << "please enter the positive number." << endl;
        return 0;
    }
    if (num % 5 == 0)
    {
        cout << num << " is divisible by 5.";
    }
    else
    {
        cout << num << " is not divisible by 5.";
    }

    return 0;
}