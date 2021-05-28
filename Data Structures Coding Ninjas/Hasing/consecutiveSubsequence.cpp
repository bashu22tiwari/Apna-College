#include <bits/stdc++.h>
using namespace std;

// int longestConsecutiveSubsequence(int arr[], int n){
//     sort(arr,arr+n);
//     int res = 0;
//     int count=1;
//     for(int i=1; i<n ; i++){
//         if(arr[i]-arr[i-1]==1){
//             count++;
//         }
//         else{
//             count=1;
//         }

//         res = max(res,count);
//     }

//     return res;
// }

int longestConsecutiveSubsequence(int arr[], int n){
    int res=1;
    unordered_set<int> h(arr,arr+n);
    for(int i=0 ; i<n ; i++){
        int curr=1;
        if(h.find(arr[i]-1)==h.end()){
            while(h.find(arr[i]+curr)!=h.end()){
            curr++;
            }
        }

        res = max(curr,res);
    }

    return res;
}

int main(){
    int arr[] {1,9,3,4,2,10};
    cout << longestConsecutiveSubsequence(arr,6);
}