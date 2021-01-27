// In this i will be using a selection sort technique to sort an array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    cin >> n;
    int array[n];
    for(int i=0; i<n ; i++)
    {
        cin >> array[i] ;
    }

    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=i+1 ;  j<n; j++ )
        {
            if(array[j] < array[i])
            {
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        cout << array[i] << " " ;
    }

}