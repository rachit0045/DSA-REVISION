#include <iostream>
using namespace std;
int main()
{
    int r = 4;
    int c = 4;
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