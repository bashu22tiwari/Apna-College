#include <bits/stdc++.h>
using namespace std;

int maxProfit(int arr[] , int start , int end){
    if(end<=start){
        return 0;
    }
    int profit = 0;
    for(int i=start ; i<end ; i++){
        for(int j=i+1 ; j<=end ; j++){
            if(arr[j]>arr[i]){
                int currProfit = arr[j]-arr[i]+maxProfit(arr,start,i-1)+maxProfit(arr,j+1,end);
                profit = max(profit , currProfit);
            }
        }
    }
    return profit;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    int profit = maxProfit(arr, 0 , n-1);
    cout << profit ;
}