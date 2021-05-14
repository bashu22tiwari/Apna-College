#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }

    int x = 5 ;

    int start=0;
    int end=n-1;
    int mid=-1;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==x){
            break;
        }
        if(arr[mid]>x){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    cout << mid ;
}