// In this we will be gooing to search any element in the array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    int flag=0;
    cout << "ENter the No of elements in array\n" ;
    cin >> n ;
    int array[n];
    cout << "Enter elements of array\n" ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i];
    }

    int num;
    cout << "Enter the no to be found\n" ;
    cin >> num ;

    for(int i=0 ; i<n ; i++)
    {
        if(array[i]==num)
        {
            flag=1;
            a=i;
            break;
        }
    }
    if(flag)
    {
        cout << num << " is present of the " << a << " index\n" ;
    }
    else
    {
        cout << "-1\n" ;
    }
}