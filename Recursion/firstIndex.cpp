#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int firstIndex(int arr[] , int size , int number, int count)
{
    if(size==0){
        return -1;
    }
    if(arr[0]==number)
    {
        return count;
    }
    count++;

    return firstIndex(arr+1,size-1,number,count);
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
    int i=0;

    cout << firstIndex(arr,n,number,i);
}