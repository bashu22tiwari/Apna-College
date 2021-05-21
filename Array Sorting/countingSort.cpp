#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,4,4,1,0,1};
    int k=5;

    int count[5];
    for(int i=0 ; i<5 ; i++){
        count[i] = 0 ;
    }

    for(int i=0 ; i<6 ; i++){
        count[arr[i]]++;
    }

    int j = 0;
    for(int i=0 ; i<k ; i++){
        for(int k=0 ; k<count[i] ; k++){
            arr[j] = i;
            j++;
        }
    }

    for(int i=0 ; i<6 ; i++){
        cout << arr[i] << " " ;
    }
}