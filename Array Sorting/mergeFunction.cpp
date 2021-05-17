#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {5,8,12,14,7};{
        int low = 0 ;
        int mid = 3;
        int high = 4;
        int i = low ;
        for(int j=mid+1 ; j<=high ; j++)
        {
            while(i<=(mid)){
                if(arr[i]<=arr[j]){
                    i++;
                }
                else{
                    swap(arr[i] , arr[j]);
                }
            }

            i=low;
            mid++;
        }

        for(int i=0 ; i<5 ; i++){
            cout << arr[i] << " ";
        }
    }
}