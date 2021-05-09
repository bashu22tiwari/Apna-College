#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3] = {10,20,30};
    set<int> s;

    s.insert(arr[0]);
    cout << "-1 ";

    for(int i=1 ; i<3 ; i++){
        auto it = s.lower_bound(arr[i]);
        if(it != s.end()){
            cout << (*it) << " ";
        }
        else{
            cout << "-1 ";
        }
        s.insert(arr[i]);
    }
}