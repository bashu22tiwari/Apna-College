#include <bits/stdc++.h>
using namespace std;

int main(){
    int cost[] = {10,120,5,0,20,39,200};
    int sum = 35 ;
    priority_queue<int , vector<int> , greater<>> pq;
    for(int i=0 ; i<7  ; i++){
        pq.push(cost[i]);
    }

    int res = 0;
    while(pq.empty()==false){
        if(pq.top()>sum){
            break;
        }
        res++;
        sum -= pq.top();
        pq.pop();
    }

    cout << res;
}