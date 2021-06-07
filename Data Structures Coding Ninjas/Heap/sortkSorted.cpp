#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int arr[] = {9,8,7,18,19,17};
    int k=2;
    priority_queue<int , vector<int> , greater<int>> pq;

    for(int i=0 ; i<=k ; i++){
        pq.push(arr[i]);
    }
    int index=0;
    for(int i=k+1 ; i<n ; i++){
        arr[index++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }

    for(int i=0 ; i<=k ; i++){
        arr[index++] = pq.top();
        pq.pop();
    }

    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }

}