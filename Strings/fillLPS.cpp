#include <bits/stdc++.h>
using namespace std;

int longProperPrefixSuffix(string str, int n){
    bool flag = true;
    for(int len = n-1 ; len>0 ; len--){
        for(int i=0 ; i<len ; i++){
            if(s[i]!=s[n-len+1]){
                flag=false;
            }
        }
        if(flag==true){
            return len;
        }
    }

    return 0;
}

void fillLPS(string str, int LPS[]){
    for(int i=0 ; i<s.size() ; i++){
        LPS[i] = longProperPrefixSuffix(str,i+1);
    }
}