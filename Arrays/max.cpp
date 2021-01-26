// In this we will find the maaximum term of the array

#include <bits/stdc++.h>
using namespace std ; 

int main()
{
    int n,maxNo;
    cin >> n ;
    int array[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i] ;
    }

    maxNo = array[0] ; 
    for(int j=1 ; j<n ; j++)
    {
        if(array[j] > maxNo)
        {
            maxNo = array[j];
        }
    }
    cout << "Minimun Term is " << maxNo ; 
}