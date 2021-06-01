#include <bits/stdc++.h>
using namespace std;

// int leftMostRepeating(string s){
//     int arr[26] = {0};
//     for(int i=0 ; i<s.size() ; i++){
//         arr[s[i]-'a']++;
//     }

//     for(int i=0 ; i<s.size() ; i++){
//         if(arr[s[i]-'a']>1){
//             return i;
//         }
//     }

//     return -1;
// }

int leftMostRepeating(string s){
    int findex[256];
    fill(findex , findex+256 , -1);
    int res = INT_MAX;
    for(int i=0 ; i<s.size() ; i++){
        int fi = findex[s[i]];
        if(fi==-1){
            findex[s[i]] = i ;
        }
        else{
            res = min(res,fi);
        }
    }

    return res==INT_MAX?-1:res;
}

int main(){
    string s = "abccd";
    cout << leftMostRepeating(s);
}