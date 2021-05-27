#include <bits/stdc++.h>
using namespace std;

string findPairSum(int arr[], int n, int x){
    unordered_set<int> s;
    for(int it = 0 ; it<n ; it++){
        if(s.find(x-arr[it])!=s.end()){
            return "YES";
        }
        s.insert(arr[it]);
    }

    return "NO";
}

int main(){
    int x = 10;
    int n = 3;
    int arr[] = {11,5,6};
    cout << findPairSum(arr,n,x);
}