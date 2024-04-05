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
    cout << "Enter the element to search :";
    cin >> x;
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (x == arr[i])
        {
            cout << x << " is found.";
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Element is not found .";
    }

    return 0;
}