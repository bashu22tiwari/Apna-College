#include <bits/stdc++.h>
using namespace std;

int countIntersection(int a[] , int b[] , int m, int n){
    int count=0;

    unordered_set<int> s1(a,a+m);
    unordered_set<int> s2(b,b+n);

    for(auto i=s1.begin() ; i!=s1.end() ; i++){
        if(s2.find(*i) != s2.end()){
            cout << *i << " ";
            count++;
        }
    }

    cout << "\n";
    return count;
}

int main(){
    int m=3;
    int n=3;
    int a[] = {10,10,10};
    int b[] = {10,10,10};

    cout << countIntersection(a,b,m,n);
}