#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the rows :";
    cin >> r;
    int num = 0;
    for (int i = 0; i < r; i++)
    {
        num += 1;
        for (int j = 1; j < r; j++)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}