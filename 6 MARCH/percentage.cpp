#include <iostream>
using namespace std;
int main()
{
    float sub1, sub2, sub3, sub4, sub5;
    cout << "Enter the marks of subject 1 : ";
    cin >> sub1;
    cout << "Enter the marks of subject 2 : ";
    cin >> sub2;
    cout << "Enter the marks of subject 3 : ";
    cin >> sub3;
    cout << "Enter the marks of subject 4 : ";
    cin >> sub4;
    cout << "Enter the marks of subject 5 : ";
    cin >> sub5;
    float totatmarksobtained = sub1 + sub2 + sub3 + sub4 + sub5;
    float totalmarks = 5 * 100;
    float percentage = (totatmarksobtained / totalmarks) * 100;
    cout << "The percentage of 5 subject is : " << percentage << endl;
    return 0;
}