#include <iostream>
using namespace std;
int main()
{
    int n, ft, cr;
    cout << "Enter the n term of GP :";
    cin >> n;
    cout << "Enter the first term of GP :";
    cin >> ft;
    cout << "Enter the common ratio  of GP :";
    cin >> cr;
    for (int i = 0; i < n; i++)
    {
        cout << ft << endl;
        ft *= cr;
    }
    return 0;
}