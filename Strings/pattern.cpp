#include <bits/stdc++.h>
using namespace std;

void patternSearch(string str, string pattern){
    int strLength = str.size();
    int patternLength = pattern.size();

    for(int i=0 ; i<strLength-patternLength+1 ; i++){
        int count=0;
        for(int j=0; j<patternLength ; j++){
            if(pattern[j]==str[i+j]){
                count++;
            }
            if(count==patternLength){
                cout << i << " ";
            }
        }
    }
}

void distinctPatternSearch(string str, string pattern){
    int strLength = str.size();
    int patternLength = pattern.size();

    for(int i=0 ; i<=strLength-patternLength ; ){
        int j;
        for(j=0 ; j<patternLength ; j++){
            if(pattern[j]!=str[i+j]){
                break;
            }
        }
        if(j==patternLength){
            cout << i << " ";
        }

        if(j==0){
            i++;
        }
        else{
            i = i+j;
        }
    }
}

int main(){
    string str = "abcabaabbabsabcccabcacbacbabc";
    string pattern = "abc";
    distinctPatternSearch(str,pattern);

}