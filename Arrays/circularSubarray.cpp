#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i=0 ; i<n ; i++){
        int currSum=0;
        for(int j=(i+1)%n ;  j!=i ; j=(j+1)%n){
            currSum += arr[j];
            sum = max(currSum,sum);
        }
    }
    cout << sum ;
}