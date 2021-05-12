#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[8] = {1,2,3,4,8,5,6,7};
    int count=0;
    for(int i=0 ; i<8 ; i++){
        if(arr[i]!=0){
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;
            count++;
        }
    }
    for(int i=0 ; i<8 ; i++){
        cout << arr[i] << " ";
    }
}