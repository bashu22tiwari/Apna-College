#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {900,940,950,1100,1500,1800};
    int dept[6] = {910,1200,1120,1130,1900,2000};

    int i=1 , j=0, res=1 ;
    int guests = 1;
    while(i<6 && j<6){
        if(arr[i]<=dept[j]){
            i++;
            guests++;
        }
        else{
            j++;
            guests--;
        }

        res = max(res,guests);
    }

    cout << res ;
}