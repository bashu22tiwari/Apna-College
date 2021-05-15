#include <bits/stdc++.h>
using namespace std;

int findPeak(int arr[] , int n){
    int low=0 , high=n-1 ;
    while(low<=high){
        int mid = (low+high)/2;
        if((mid==0 || arr[mid-1]<=arr[mid]) && (mid==n-1 && arr[mid+1]<=arr[mid])){
            return mid;
        }
        if(mid>0 && arr[mid+1]>=arr[mid]){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    cout << findPeak(arr,n);
}