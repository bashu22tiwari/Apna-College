#include <bits/stdc++.h>
using namespace std;

string isSumPresent(int arr[] , int n, int x){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==x){
            return "YES";
        }
        else if(arr[low]+arr[high]<x){
            low++;
        }
        else{
            high--;
        }
    }

    return "NO";
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    int x=10;
    cout << isSumPresent(arr,n,x);
}