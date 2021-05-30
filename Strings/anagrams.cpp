#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "abdfgscd";
    string s2 = "abcdsdfg";
    int count[256] = {0};

    for(int i=0 ; i<s1.size() ; i++){
        count[s1[i]]++;
        count[s2[i]]--;    
    }

    int flag=1;

    for(int i=0 ; i<256 ; i++){
        if(count[i]!=0){
            flag=0;
            break;
        }
    }

    if(flag==0){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}