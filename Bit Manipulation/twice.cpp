// In this we will be going to find whether a number is appeared only once ornot amang the various numbers

#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int unique(int arr[] , int n)
{
    int xorsum=0;
    for(int i=0; i<n ; i++)
    {
        xorsum ^= arr[i];
    }
    return xorsum;
}

int main()
{
    int arr[7]={1,2,3,4,1,2,3};
    cout << unique(arr,7) ;
}