#include <bits/stdc++.h>
using namespace std;

bool subarraySum(int arr[] , int n, int sum){
    int prefixSum = 0;
    unordered_set<int> s;
    for(int i=0 ; i<n ; i++){
        prefixSum+=arr[i];
        if(s.find(prefixSum-sum)!=s.end()){
            return true;
        }
        if(prefixSum==sum){
            return true;
        }

        s.insert(prefixSum);
    }

    return false;
}

int main(){
    int arr[] = {3,2,5,6};
    cout << subarraySum(arr,4,10);
}