#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[8] = {3,4,1,9,56,7,9,12};
    int m=5;

    sort(arr , arr+8);
    int res = INT_MAX;
    for(int i=0 ; i<=3 ; i++){
        int diff = arr[i+4] - arr[i];
        res = min(diff , res);
    }

    cout << res ;
}