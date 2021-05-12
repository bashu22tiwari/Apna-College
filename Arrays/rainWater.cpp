#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    int water = 0;
    for(int i=1 ; i<(n-1) ; i++){
        int lmax=arr[i];
        for(int j=0 ; j<i ; j++){
            lmax = max(arr[j] , lmax);
        }
        int rmax = arr[i];
        for(int j=i+1 ; j<n ; j++){
            rmax = max(arr[j] , rmax);
        }

        if(lmax>arr[i] && rmax>arr[i]){
            water += min(lmax,rmax) - arr[i];
        }
    }
    cout << water ;
}