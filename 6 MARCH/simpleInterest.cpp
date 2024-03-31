#include <iostream>
using namespace std;
int main()
{
    float p, r, t;
    cout << "Enter the princliple :";
    cin >> p;
    cout << "Enter the rate :";
    cin >> r;
    cout << "Enter the time :";
    cin >> t;
    float si = (p * r * t) / 100;
    cout << "simple interest is :" << si << endl;
    return 0;
}
