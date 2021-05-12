#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {7,10,4,10,3,6,5,2};
    // for(int i=0 ; i<8 ; i++){
    //     int flag=1;
    //     for(int j=i+1 ; j<8 ; j++){
    //         if(arr[j]>=arr[i]){
    //             flag=0;
    //             break;
    //         }
    //     }
    //     if(flag==1){
    //         cout << arr[i] << " ";
    //     }
    // }
    
    int largest = 7;
    cout << arr[7] << " ";
    for(int i=6 ; i>=0 ; i--){
        if(arr[i]>arr[largest]){
            largest = i;
            cout << arr[i] << " ";
        }
    }
}