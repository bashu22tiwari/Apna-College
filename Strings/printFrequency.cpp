#include <bits/stdc++.h>
using namespace std;

void printFrequency(string str){
    int arr[26] = {0};
    for(int i=0 ; i<str.size() ; i++){
        arr[str[i]-'a']++;
    }

    for(int i=0 ; i<26 ; i++){
        cout << (char)(i+'a') << " " << arr[i] << "\n";
    }
}

int main(){
    string str = "zxcvbnmlpiuytrewqasdfghjklmnbvcsdtyujoiutrewsedryguhjioklpbk";
    printFrequency(str);
}