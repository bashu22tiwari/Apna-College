#include <bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[], int n, int sum){
    int prefixSum = 0;
    int res = 0;
    unordered_map<int ,int> m;
    for(int i=0 ; i<n ; i++){
        prefixSum+=arr[i];
        if(prefixSum==sum){
            res = i+1 ;
        }

        if(m.find(prefixSum)==m.end()){
            m.insert({prefixSum, i});
        }

        if(m.find(prefixSum-sum)!=m.end()){
            res = max(res, i-m[prefixSum-sum]);
        }
    }
    return res;
}

int main(){
    int arr[] = {8,3,1,5,-6,6,2,2} ;
    cout << longestSubarray(arr,8,4);
}