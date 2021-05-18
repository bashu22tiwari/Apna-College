#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,8,6,12,10,7} ;
    int l=0;
    int h=5;
    int p=5;
    int temp[h-l+1];
    int i=0;
    while(l<=h){
        if(arr[l]<arr[p]){
            temp[i] = arr[l];
            i++;
        }
        l++;
    }
    l=0;
    while(l<=h){
        if(arr[l]==arr[p]){
            temp[i] = arr[l];
            i++;
        }
        l++;
    }
    l=0;
    while(l<=h){
        if(arr[l]>arr[p]){
            temp[i] = arr[l];
            i++;
        }
        l++;
    }

    for(int i=0 ; i<=p ; i++){
        cout << temp[i] << " ";
    }

}