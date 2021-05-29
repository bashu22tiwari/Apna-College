#include <bits/stdc++.h>
using namespace std;

void countDistinct(int arr[], int n, int k){
    unordered_map<int, int> m;
    for(int i=0 ; i<k ; i++){
        m[arr[i]]++;
    }

    cout << m.size() << " " ;

    for(int i=k; i<n ; i++){
        m[arr[i-k]]--;
        m[arr[i]]++;
        int size=0;
        for(auto it : m){
            if(it.second>0){
                size++;
            }
        }

        cout << size << " ";
    }
}

int main(){
    int arr[] = {10,20,30,40};
    countDistinct(arr,4,3);
}