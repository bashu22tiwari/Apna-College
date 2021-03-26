#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

void reverseArray(int arr[] , int n)
{
    if(n==0)
    {
        return;
    }

    return reverseArray(arr+1,n-1);

    arr[n-1] = arr[0];
}

int main()
{
    int n;
    cin >> n ;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    }

    // for(int i=0 ; i<n/2 ; i++)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[n-1-i];
    //     arr[n-1-i] = temp;
    // }


    // int s=0;
    // int e=n-1;
    // while(s<=e)
    // {
    //     int temp = arr[s];
    //     arr[s] = arr[e];
    //     arr[e] = temp;
    //     s++;
    //     e--;
    // }

    reverseArray(arr,n);

    for(int i=0 ; i<n ; i++)
    {
        cout << arr[i] << " " ;
    }
}