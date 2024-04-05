#include <iostream>
using namespace std;
int main()
{
    int arr[1000], size;
    cout << "Enter the size of array :";
    cin >> size;
    cout << "Enter the element of array :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max_value = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
        }
    }
    cout << "Maxinum value is :" << max_value << endl;
    return 0;
}