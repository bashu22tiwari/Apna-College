#include <bits/stdc++.h>
using namespace std;

    // void frequency(int arr[] , int n){

        
    //     for(int i=0 ; i<n ; i++){
    //         int flag=0;
    //         for(int j=0 ; j<i ; j++){
    //             if(arr[i]==arr[j]){
    //                 flag=1;
    //                 break;
    //             }
    //         }

    //         if(flag==1){
    //             continue;
    //         }

    //         int count = 0;
    //         for(int j=i ; j<n ; j++){
    //             if(arr[i]==arr[j]){
    //                 count++;
    //             }
    //         }

    //         cout << arr[i] << " " << count << endl;
    //     }


    // }

void frequency(int arr[] , int n){
    unordered_map<int,int> h;

    for(int i=0 ; i<n ; i++){
        h[arr[i]]++;
    }

    for(auto it : h){
        cout << it.first <<  " " << it.second << "\n";
    }
}

int main(){
    int n = 5;
    int arr[] = {10,20,20,10,30};
    frequency(arr,n);
}