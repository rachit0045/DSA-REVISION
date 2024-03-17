#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the 'n' term of GP: ";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << a;
        cout << " ,";
        a *= 2;
    }
    return 0;
}