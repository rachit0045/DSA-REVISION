#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the rows :";
    cin >> r;
    char alphabet = 'A';
    for (int i = 1; i <= r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
                cout << j << " ";
        }

        else
        {
            char temp = alphabet;
            for (int j = 1; j <= i; j++)
            {
                cout << temp << " ";
                temp++;
            }
        }

        cout << endl;
    }
    return 0;
}