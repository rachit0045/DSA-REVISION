#include <iostream>
using namespace std;
int main()
{
    int arr[1000], size, x;
    cout << "Enter the size of array :";
    cin >> size;
    cout << "ENter the element of array :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int l = arr[0];
    int sl = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > l)
        {
            sl = l;
            l = arr[i];
        }
        else if (arr[i] > sl && l < arr[i])
        {
            sl = arr[i];
        }
    }
    cout << "Second largest element is : " << sl << endl;
    return 0;
}