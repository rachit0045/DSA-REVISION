#include <iostream>
using namespace std;
int main()
{
    int r = 3;
    int c = 5;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << " * "<< " ";
        }
        cout << endl;
    }
    return 0;
}