#include <bits/stdc++.h>
using namespace std;

vector<string> reverseWords(string str){
    vector<string> v;
    string s="";
    for(int i=0 ; i<str.size() ; i++){
        if((int)str[i]==32){
            v.push_back(s);
            s="";
        }
        else{
            char c = str[i];
            s = s+c;
        }
    }
    v.push_back(s);
    reverse(v.rbegin() , v.rend());
    return v;
}

int main(){
    string s = "ram loves shyam loves sita loves bashu";
    vector<string> v;
    v = reverseWords(s);
    for(int i=0 ; i<v.size() ; i++){
        cout << v[i] << " ";
    }
}