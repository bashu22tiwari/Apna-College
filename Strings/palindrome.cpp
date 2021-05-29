#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    int s = 0;
    int e = str.size()-1;
    while(s<=e){
        if(str[s]!=str[e]){
            return false;
        }
        
        s++;
        e--;
    }
    return true;
}

int main(){
    string str = "abbagrft";
    cout << isPalindrome(str);
}