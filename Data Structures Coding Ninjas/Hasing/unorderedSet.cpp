#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(15);

    for(auto it = s.begin() ; it!=s.end() ; it++){
        cout << *it << " ";
    }
    cout << "\n";
    // cout << s.size() << "\n";
    // s.clear();
    // cout << s.size() << "\n";

    if(s.find(20)==s.end()){
        cout << "Not Found\n";
    }
    else{
        cout << "Found\n";
    }
}