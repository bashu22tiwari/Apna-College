#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {5,6,4,7,8,9,2,3,10,1};

    for(int cs=0 ; cs<9 ; cs++){

        int item = arr[cs];
        int pos = cs;
        for(int i=cs+1 ; i<10 ; i++){
            if(arr[i] < item){
                pos++;
            }
        }
        swap(item , arr[pos]);

        while(pos!=cs){
            pos = cs;
            for(int i=cs+1 ; i<10 ; i++){
                if(arr[i]<item){
                    pos++;
                }
            }
            swap(item , arr[pos]);
        }
    }

    for(int i=0 ; i<10 ; i++){
        cout << arr[i] << " ";
    }
}