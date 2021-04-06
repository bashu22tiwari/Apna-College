#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>

using namespace std;

int main(){
    string s;
    cin >> s;
    int flag=1;

    stack<char> s1;

    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='(')
        {
            s1.push(s[i]);
            cout << s1.top() << "\n";
        }
        else if(s[i]=='}' || s[i]==']' || s[i]==')')
            if((s[i]=='}' && s1.top()=='{') || (s[i]==']' && s1.top()=='[') || (s[i]==')' && s1.top()=='('))
            {
                s1.pop();
            }
            else
            {
                flag=0;
                break; 
            }  
    }

    if(flag==1 && s1.empty()==1){
        cout << "Yes" ;
    }
    else{
        cout << "No";
    }
}