#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    cout << "Digits in number is : " << count << endl;
    return 0;
}