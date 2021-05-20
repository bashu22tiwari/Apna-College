#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {0,1,2,1,2,0};
    int low=0 , mid=0 , high=5;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low] , arr[mid]);
            low++; mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

    for(int i=0 ; i<6 ; i++){
        cout << arr[i] << " ";
    }
}