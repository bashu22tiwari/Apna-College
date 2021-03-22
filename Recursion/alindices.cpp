#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

void alindices(int arr[] , int size, int number, int count)
{

    if(size==0)
    {
        exit(0);
    }
    if(arr[0]==number)
    {
       cout << count << " " ;
    }
    count++;

    alindices(arr+1,size-1,number,count);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    int number;
    cin >> number;
    int count=0;

    alindices(arr,n,number,count);
}