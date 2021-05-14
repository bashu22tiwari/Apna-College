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
    int flag=0;
    int mid=0;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==0){
            low=mid+1;
        }
        else if(arr[mid]==1){
            if(mid==0){
                break;
            }
            else if(arr[mid-1]==0){
                flag=1;
                break;
            }
            else if(arr[mid-1]==1){
                flag=1;
                high = mid-1;
            }
        }
    }

    if(flag==1){
        cout << n-mid ;
    }
    else{
        cout << "0" ;
    }
}