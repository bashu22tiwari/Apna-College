#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s1, string s2, int n, int m){
    int count=0;
    for(int i=0 ; i<n ; i++){
        if(s1[i]==s2[count]){
            count++;
        }
    }

    return (count==m);
}

int main(){
    string s1 = "ABCDEDCGH";
    string s2 = "AED";
    cout << isSubsequence(s1,s2,9,3);
}