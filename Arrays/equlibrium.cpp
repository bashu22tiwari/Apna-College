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

    int sum=0;
    int leftSum=0;
    for(int i=0 ; i<n ; i++)
    {
        sum += arr[i];
    }

    int i=0;
    for(;i<n;i++)
    {
        sum -= arr[i];
        if(sum==leftSum)
        {
            break;
        }
        leftSum += arr[i];
    }

    cout << i ;
}