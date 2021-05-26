#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, int> m;

    m["gfg"] = 20 ;
    m["ide"] = 30;
    m.insert({"abcd",20});

    for(auto x : m){
        cout << x.first << " " << x.second << "\n";
    }
    
    cout << m.size() << "\n";

}   