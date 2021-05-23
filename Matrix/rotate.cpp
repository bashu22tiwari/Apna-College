#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4][4] = {{1,2,3,4},
                    {8,7,6,5},
                    {9,10,11,12},
                    {16,15,14,13}};

    for(int i=0 ; i<4 ; i++){
        for(int j=i+1 ; j<4 ; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }

    for(int j=0 ; j<4 ; j++){
        for(int i=0 ; i<2 ; i++){
            swap(arr[i][j] , arr[3-i][j]);
        }
    }

    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}