#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int lastoccur(int arr[] , int n, int i, int key)
{
    if(i==-1)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    int restArray= lastoccur(arr,n,i-1,key);

    return restArray;
}

int main()
{
  int array[7]={4,2,1,2,5,2,7};
  int i =7 ;
  cout << lastoccur(array,7,i,2);  
}