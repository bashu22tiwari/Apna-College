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

    int prefixSum[n]= {0} ;
    prefixSum[0]=arr[0];

    for(int i=1 ; i<n ; i++)
    {
        prefixSum[i] = prefixSum[i-1]+arr[i];
    }

    for(int i=0 ; i<n ; i++)
    {
        cout << prefixSum[i] << " ";
    }


}