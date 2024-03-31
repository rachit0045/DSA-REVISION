#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    if (num >= 100 && num <= 999)
    {
        cout << num << " is three digit number .";
    }
    else
    {
        cout << num << " is not three digit number .";
    }
    return 0;
}
