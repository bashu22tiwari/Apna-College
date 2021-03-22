#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

int lastIndex(int arr[] , int index, int number)
{
    if(index<0){
        return -1;
    }
    if(arr[index]==number){
        return index;
    }

    return (arr,index-1,number);
    
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

    cout << lastIndex(arr,n-1,number);
}