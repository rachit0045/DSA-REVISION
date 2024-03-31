#include <iostream>
using namespace std;
int main()
{
    int n, ft, cd;
    cout << "Enter the n term of AP :";
    cin >> n;
    cout << "Enter the first term of AP :";
    cin >> ft;
    cout << "Enter the common difference  of AP :";
    cin >> cd;
    for (int i = 0; i < n; i++)
    {
        cout << ft << endl;
        ft += cd;
    }

    return 0;
}