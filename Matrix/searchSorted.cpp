#include <bits/stdc++.h>
using namespace std;

bool findX(int arr[][4] , int m , int n, int x){
    int i=0;
    int j=n-1;

    while(i>=0 && j>=0){
        if(arr[i][j]==x){
            return true;
        }
        else if(arr[i][j]>x){
            j--;
        }
        else{
            i++;
        }
    }

    return true;
}

int main(){
    int arr[4][4] = {{10,20,30,40},
                    {15,25,35,45},
                    {27,29,37,48},
                    {32,33,39,50}};
                    
    int x=29;

    cout << findX(arr , 4 , 4 ,29);
}