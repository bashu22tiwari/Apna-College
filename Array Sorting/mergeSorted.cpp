#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {10,20,50};
    int b[] = {5,50,50};

    int n = 3;
    int m = 3;

    int i=0,j=0;
    while(i!=n && j!=m){
        if(a[i]<=b[j]){
            cout << a[i] << " ";
            i++;
        }
        else{
            cout << b[j] << " ";
            j++;
        }
    }

    while(i!=n){
        cout << a[i] << " ";
        i++;
    }

    while(j!=m){
        cout << b[j] << " ";
        j++;
    }
}