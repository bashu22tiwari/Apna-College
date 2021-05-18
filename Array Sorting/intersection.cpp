#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {1,1,1,1,2,3,7,8};
    int b[] = {1,1,3,3,3};

    int m = 8;
    int n=5;
    int i=0 , j=0;
    while(i!=m && j!=n){
        if(a[i]==b[j]){
            if(i==0 || j==0){
                cout << a[i] << " ";
                i++; j++;
            }
            else if(i>0 && a[i]!=a[i-1]){
                cout << a[i] << " ";
                i++; j++;
            }
            else{
                i++; j++;
            }
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
}