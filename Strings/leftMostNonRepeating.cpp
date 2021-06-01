#include <bits/stdc++.h>
using namespace std;

int leftMostNonRepeating(string str){
    int findex[256];
    fill(findex , findex+256 , -1);
    for(int i=str.size() ; i>=0 ; i--){
        if(findex[str[i]]==-1){
            findex[str[i]] = i ;
        }
        else{
            findex[str[i]] = -2;
        }
    }

    int res = INT_MAX;
    for(int i=0 ; i<256 ; i++){
        if(findex[i]>=0){
            res = min(findex[i] , res);
        }
    }

    return res==INT_MAX?-1:res;
}

int main(){
    string str = "geeksforgeeks";
    cout << leftMostNonRepeating(str);
}