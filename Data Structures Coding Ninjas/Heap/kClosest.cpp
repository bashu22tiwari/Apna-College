#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {100,80,10,5,70};
    int x = 2;
    int k = 3;

    bool visited[5] = {false};
    for(int i=0 ; i<k ; i++){
        int min_diff = INT_MAX;
        int min_diff_index;
        for(int j=0 ; j<5 ; j++){
            if(visited[j]==false && abs(arr[j]-x)<=min_diff){
                min_diff = abs(arr[j]-x);
                min_diff_index = j;
            }
        }

        cout << arr[min_diff_index] << " ";
        visited[min_diff_index] = true;
    }

    return 0;
}