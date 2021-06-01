#include <bits/stdc++.h>
using namespace std;

void rabinCarpAlgorithm(string str, string pattern){
    int slength = str.size();
    int pattlength = pattern.size();

    int hashstr = 0;
    int hashpatt = 0;

    for(int i=0 ; i<pattlength ; i++){
        hashstr += (int)str[i];
        hashpatt += (int)pattern[i];
    }

    for(int i=0 ; i<slength-pattlength+1 ; i++){
        if(hashstr==hashpatt){
            int j=0;
            for(j=0 ; j<pattlength; j++){
                if(str[i+j]!=pattern[j]){
                    break;
                }
            }
            if(j==pattlength){
                cout << i << " ";
            }
        }
        hashstr += (int)str[i+pattlength] - (int)str[i];
    }
}

int main(){
    string str = "geeksforgeeks";
    string pattern = "eks";
    rabinCarpAlgorithm(str,pattern);

}