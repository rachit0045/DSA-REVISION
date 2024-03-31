#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    if (num < 0)
    {
        cout << "Plaese enter the positive number .";
        return 0;
    }
    if (num % 2 == 0)
    {
        cout << num << " is a even number .";
    }
    else
    {
        cout << num << " is a odd number .";
    }

    return 0;
}