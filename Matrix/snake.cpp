#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4][4] = {{1,2,3,4},
                    {8,7,6,5},
                    {9,10,11,12},
                    {16,15,14,13}};

    int i=0 ;
    while(i<4){
        if(i%2==0){
            for(int j=0 ; j<4 ; j++){
                cout << arr[i][j] << " ";
            }
        }
        else{
            for(int j=3 ; j>=0 ; j--){
                cout << arr[i][j] << " ";
            }
        }
        i++;   
}

return 0;
}