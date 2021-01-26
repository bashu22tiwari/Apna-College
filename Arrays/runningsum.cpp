// Return the running sum of nums

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int array1[n];
    int array2[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> array1[i];
    }
    for (int i=0 ; i<n ; i++)
    {
        int sum=0;
        for(int j=0 ; j<=i ; j++)
        {
            sum += array1[j] ;
        }
        array2[i] = sum ;
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << array2[i] << " " ;
    }
    

}