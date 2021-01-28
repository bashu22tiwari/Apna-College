// In this i am going to sort the array using the bubble sort method.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int array[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i];
    }

    for (int  i = 0; i < n-1 ; i++)
    {
        for(int j=0; j<n-1-i ; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp=array[j+1]; 
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }

    for (int i=0 ; i<n ; i++)

    {
        cout << array[i] << " ";
    }
    
    
}