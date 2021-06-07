#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {8,6,4,10,9} ;
    int k = 3 ;

    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0 ; i<k ; i++){
        pq.push(arr[i]);
    }

    for(int i=k ; i<5 ; i++){
        if(pq.top()<arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    while(pq.empty()==false){
        cout << pq.top() << " ";
        pq.pop();
    }
}