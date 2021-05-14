#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int low=1;
    int high=n;
    int ans=-1;
    while(low<=high){
        int mid = (low+high)/2;
        int i= mid*mid ;
        if(i==n){
            ans=mid;
            break;
        }

        if(i>n){
            high = mid-1;
        }
        else{
            low = mid+1;
            ans = mid;
        }
    }

    cout << ans ;
}