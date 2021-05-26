#include <bits/stdc++.h>
using namespace std;

int countDistinct(int arr[] , int n){
    unordered_set<int> s;
    for(int i=0 ; i<n ; i++){
        s.insert(arr[i]);
    }

    return s.size();
}

int main(){
    int n = 10;
    int arr[] = {1,1,1,1,1,1,1,1,1,1,1};

    cout << countDistinct(arr,10);
}