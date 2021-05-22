#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4][4] = {{1,2,3,4},
                    {8,7,6,5},
                    {9,10,11,12},
                    {16,15,14,13}};

    for(int i=0 ; i<4 ; i++){
        cout << arr[0][i] << " ";
    }

    for(int i=1 ; i<4 ; i++){
        cout << arr[i][3] <<  " ";
    }

    for(int i=2 ; i>=0 ; i--){
        cout << arr[3][i] << " ";
    }
    for(int i=2 ; i>=1 ; i--){
        cout << arr[i][0] << " ";
    }
}