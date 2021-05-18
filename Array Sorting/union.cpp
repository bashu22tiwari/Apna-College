#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {3,5,8};
    int b[] = {2,8,9,10,15};

    int m = 3;
    int n=5;
    int i=0 , j=0;
    while(i!=m && j!=n){
        if(i>0 && a[i]==a[i-1]){ continue; }
        if(j>0 && b[j]==b[j-1]){ continue; }
        if(a[i]<b[j]){ cout << a[i] << " " ; i++; }
        else if(a[i]>b[j]){ cout << b[j] << " " ; j++; }
        else{cout << a[i] << " " ; i++ ; j++ ;}
    }

    while(i<m){
        cout << a[i] << " " ;
        i++;
    }

    while(j<n){
        cout << b[j] << " " ;
        j++;
    }
}