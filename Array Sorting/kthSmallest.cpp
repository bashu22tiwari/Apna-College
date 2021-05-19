#include <bits/stdc++.h>
using namespace std;

int partition(int arr[] , int l , int r){
    int i=l-1;
    int pivot = arr[r];
    for(int j=l ; j<=r-1 ; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[i+1] , arr[r]);

    return i+1;
}

int main(){
    int arr[] = {1,9,2,8,3,7,4,6,5};
    int k=7;
    // sort(arr , arr+9);
    // cout << arr[k-1] ;

    int l=0 , r=8;
    int p;
    while(l<r){
        p = partition(arr,l,r);
        if(p==k-1){
            break;
        }
        else if(p<k-1){
            l = p+1;
        }
        else{
            r = p-1;
        }
    }

    cout << arr[p] ;
}