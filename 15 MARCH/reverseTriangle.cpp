#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the rows :";
    cin >> r;
    for (int i = r; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}