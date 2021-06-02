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

voidfillLPSEfficiently(string str, int LPS[]){
    int n = str.size();
    int len = 0;
    LPS[0] = 0;
    int i=0;
    (i<n){
        if(str[i]==str[len]){
            len++;
            LPS[i] = len;
            i++;
        }
        else{
            if(len==0){
                LPS[i] = 0;
                i++;
            }
            else{
                len = LPS[len-1];
            }
        }
    }
}