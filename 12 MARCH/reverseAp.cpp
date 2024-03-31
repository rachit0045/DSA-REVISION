#include <iostream>
using namespace std;
int main()
{

    for (int a = 100; a > 3; a++)
    {
        cout << a << " , ";
        a = a-3;
    }

    return 0;
}