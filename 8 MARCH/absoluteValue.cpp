#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    if (num < 0)
    {
        num = (-num);
    }
    cout << "Absolute value is : " << num << endl;
    return 0;
}