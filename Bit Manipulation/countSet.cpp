#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=13;
   

    int count=0;

    while(n){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    cout << count ;
}