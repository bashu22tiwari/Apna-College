#include <bits/stdc++.h>
using namespace std;

bool sumWithZero(int arr[], int n){
    int prefixSum = 0;
    unordered_set<int> s;
    for(int i=0 ; i<n ; i++){
        prefixSum+=arr[i];
        if(s.find(prefixSum)!=s.end()){
            return true;
        }

        if(prefixSum==0){
            return true;
        }
        s.insert(prefixSum);
    }

    return false;
}

int main(){
    int arr[] = {-1,4,-3,4,5} ;
    cout << sumWithZero(arr,5);
}