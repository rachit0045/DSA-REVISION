#include <iostream>
using namespace std;
int main()
{
    int r = 4;
    int c = 4;
    char alphabet = 'A';
    for (int i = 1; i <= r; i++)
    {
        char temp = alphabet;
        for (int j = 1; j <= c; j++)
        {
            cout << temp << " ";
            temp++;
        }
        cout << endl;
    }
    return 0;
}