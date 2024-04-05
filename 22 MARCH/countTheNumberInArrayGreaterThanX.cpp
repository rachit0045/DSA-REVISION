#include<iostream>
using namespace std;
int main(){
    int arr[1000], size, x;
    cout << "Enter the size of array :";
    cin >> size;
    cout << "ENter the element of array :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<"Enter the element to search :";
    cin>>x;
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>x)
        {
            count++;
        }
        
    }
    cout<<"Number of element which is grater than "<<x<<" is : "<<count<<endl;
    return 0;

}