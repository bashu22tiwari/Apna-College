#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
{
   class Solution{
    public:
    // The main function that returns value of a given postfix expression
    int evaluatePostfix(string S)
    {
        stack<int> s;
        
        for(int i=0 ; i<S.size() ; i++){
            
            if(S[i]=='+'){
                
                int op1 = s.top();
                s.pop();
                int op2 = s.top();
                s.pop();
                
                int op3 = op2+op1;
                s.push(op3);
                
            }
            
            else if(S[i]=='-'){
                
                int op1 = s.top();
                s.pop();
                int op2 = s.top();
                s.pop();
                
                int op3 = op2-op1;
                s.push(op3);
            }
            
            else if(S[i]=='*'){
                
                int op1 = s.top();
                s.pop();
                int op2 = s.top();
                s.pop();
                
                int op3 = op2*op1;
                s.push(op3);
            }
            else if(S[i]=='/'){
                int op1 = s.top();
                s.pop();
                int op2 = s.top();
                s.pop();
                
                int op3 = op2/op1;
                s.push(op3);
            }
            else{
                
                
                s.push(S[i]-'0');
                
            }
            
        }
        
        return s.top();
    }
};
}