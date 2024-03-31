#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter the character :";
    cin>>c;
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        cout << c << " is alphabet .";
    }
    else
    {
        cout << c << " is not alphabet .";
    }
    return 0;
}