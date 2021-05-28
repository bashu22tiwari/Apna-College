#include <bits/stdc++.h>
using namespace std;

int countOneandZero(int arr[], int n){
    int preSum = 0;
    int res = 0;
    unordered_map<int,int> m;
    for(int i=0 ; i<n ; i++){
        if(arr[i]==1){
            preSum++;
        }
        else{
            preSum--;
        }

        if(preSum==0){
            res = i+1;
        }
        if(m.find(preSum)==m.end()){
            m.insert({preSum , i});
        }
        if(m.find(preSum)!=m.end()){
            res = max(res , i-m[preSum]);
        }
    }
    return res;
}

int main(){
    int arr[] = {1,1,1,1,1,1};
    cout << countOneandZero(arr,6);
}