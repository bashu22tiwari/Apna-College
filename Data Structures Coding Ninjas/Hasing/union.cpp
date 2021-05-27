#include <bits/stdc++.h>
using namespace std;

int countUnion(int a[], int b[], int m, int n){
    unordered_set<int> s1(a,a+m);
    unordered_set<int> s2(b,b+n);

    for(auto it=s1.begin() ; it!=s1.end() ; it++){
        if(s2.find(*it)!=s2.end()){
            s2.erase(*it);
        }
    }

    return s1.size()+s2.size();
}

int main(){
    int m=3;
    int n=2;
    int a[] = {15,20,5};
    int b[] = {2,3};

    cout << countUnion(a,b,m,n);
}