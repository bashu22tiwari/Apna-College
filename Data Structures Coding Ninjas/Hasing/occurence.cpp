#include <bits/stdc++.h>
using namespace std;

void NKOccurences(int arr[], int n, int k){
    unordered_map<int,int> m;
    for(int i=0 ; i<n ; i++){
        m[arr[i]]++;
    }

    for(auto it:m){
        if(it.second>n/k){
            cout << it.first << " ";
        }
    }
}

int main(){
    int arr[] = {30,10,20,20,10,20,30,30};
    NKOccurences(arr,8,4);
}