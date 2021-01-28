// In this we will be going to sort the array using the insertion sort

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int array[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i] ;
    }

    for(int i=1 ; i<n ; i++)
    {
        int temp=array[i];
        int j=i-1;
        while(array[j]>temp && j>=0)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;
    }
    for(int i=0 ; i<n ; i++)
    {
        cout << array[i] << " ";
    }
}