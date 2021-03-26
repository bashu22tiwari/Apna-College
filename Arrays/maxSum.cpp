#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    int k;
    cin >> k ;

    // int max=0;

    // for(int i=0 ; i<=n-k; i++)
    // {
    //     int count=0;
    //     for(int j=i ; j<k+i ; j++)
    //     {
    //         count += arr[j];
    //     }

    //     if(count>=max)
    //     {
    //         max=count;
    //     }
    // }

    int window=0;
    int maxSum=0;

    for(int i=0;i<k;i++)
    {
        window += arr[i];
        
    }

    for(int i=k ; i<n ; i++)
    {
        window = window + arr[i] - arr[i-k];
        maxSum = max(window,maxSum);
    }

    cout << maxSum;
}