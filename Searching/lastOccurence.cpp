#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    int low=0,high=n-1;
    int mid=0;
    int x = 10;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]>x){
            high = mid-1 ;
        }
        else if(arr[mid]<x){
            low = mid+1;
        }
        else{
            if(mid==(n-1) || arr[mid]!=arr[mid+1]){
                break;
            }
            else{
                low = mid+1;
            }
        }
    }
    cout << mid;
}