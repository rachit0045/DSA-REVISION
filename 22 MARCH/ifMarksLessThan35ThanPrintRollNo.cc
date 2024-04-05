#include <iostream>
using namespace std;
int main()
{
    int numstudent;
    cout << "Enter the number of students :";
    cin >> numstudent;
    int marks[100];
    for (int i = 0; i < numstudent; i++)
    {
        cout << "Enter the marks of student " << i + 1<<" : ";
        cin >> marks[i];
    }
    for (int i = 0; i < numstudent; i++)
    {
        if (marks[i] < 35)
        {
            cout << " Roll number of student whose marks less than 35 is : " << i<<endl;
        }
    }

    return 0;
}