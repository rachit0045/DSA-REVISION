#include <iostream>
using namespace std;
int main()
{
    float p, r, t;
    cout << "enter the principle :";
    cin >> p;
    cout << "enter the rate :";
    cin >> r;
    cout << "enter the time :";
    cin >> t;
    float si = (p * r * t) / 100;
    cout << "simple interest is :" << si << endl;
    return 0;
}