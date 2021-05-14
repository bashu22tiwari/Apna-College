#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    int ones=0;
    int zeroes=0;
    if(arr[0]==1){
        ones++;
    }    
    else{
        zeroes++;
    }
    for(int i=1 ; i<n ;i++){
        if(arr[i]==1 && arr[i-1]==0){
            ones++;
        }
        else if(arr[i]==0 && arr[i-1]==1){
            zeroes++;
        }
    }

    cout << ones << " " << zeroes;
}