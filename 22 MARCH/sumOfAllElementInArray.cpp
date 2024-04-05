#include <iostream>
using namespace std;
int main()
{
    int arr[1000], size;
    cout << "Enter the size of array :";
    cin >> size;
    cout << "Enter the elements of array :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of all element in array is : " << sum << endl;

    return 0;
}