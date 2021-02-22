#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

string removeDuplicate(string s)
{
    if(s.size()==0)
    {
        return "";
    }

    char ch=s[0];
    string ans = removeDuplicate(s.substr(1));

    if(ch==ans[0])
    {
        return ans;
    }

    return(ch+ans) ;
}

int main()
{
    cout << removeDuplicate("aaaabbbbcccddeeef") ; 
}