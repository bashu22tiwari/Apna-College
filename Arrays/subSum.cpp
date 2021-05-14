#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    int x = 10;
    int flag=0;
    int curr_Sum=arr[0];
    int start=0;
    for(int end=1 ; end<n ; end++){
        while(curr_Sum>x && start<end-1){
            curr_Sum-=arr[start];
            start++;
        }
        if(curr_Sum==x){
            flag=1;
            break;
        }
        if(curr_Sum<x){
            curr_Sum+=arr[end];
        }
        
    }

    if(curr_Sum==x){
        flag=1;
    }
    if(flag==1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}