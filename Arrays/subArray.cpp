#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    int sum=0;
    int maxSum=0;

    for(int i=0 ; i<n ; i++)
    {
        sum=0;
        for(int j=i ; j<n ; j++)
        {
            sum += arr[j];
        }

        maxSum = max(sum,maxSum);
    }
    cout << maxSum;
}