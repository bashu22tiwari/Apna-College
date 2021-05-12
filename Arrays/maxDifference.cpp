#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    // int maxDifference = INT_MIN ;
    // for(int i=0 ; i<n ; i++){
    //     for(int j=i+1 ; j<n ; j++){
    //         maxDifference = max(maxDifference , arr[j]-arr[i]);
    //     }
    // }

    int min_element = arr[0];
    int max_difference = INT_MIN;
    for(int i=1 ; i<n ; i++){
        max_difference = max(max_difference , arr[i]-min_element);
        if(arr[i] < min_element){
            min_element =arr[i];
        }
    }


    cout << max_difference ;
}