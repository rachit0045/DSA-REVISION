#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the 'nth' term of AP :";
    cin >> n;
    int a = 1;//first term of AP
    for (int i = 1; i <= n; i++)
    {
        cout << a ;
        cout<<" ,";
        a += 2;//commondifference of AP
    }
    return 0;
}