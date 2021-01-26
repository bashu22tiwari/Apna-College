// In this we will write program to find the minimun term of array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,minNo;
    cin >> n ;
    int array[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i] ;
    }

    minNo = array[0] ; 
    for(int j=1 ; j<n ; j++)
    {
        if(array[j] < minNo)
        {
            minNo = array[j];
        }
    }
    cout << "Minimun Term is " << minNo ; 
}