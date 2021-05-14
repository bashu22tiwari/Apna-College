#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    int max_ones = 0;
    int count=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==1){
            count++;
        }
        else{
            count=0;
        }
        max_ones = max(count,max_ones);
    }
    cout << max_ones ;
}