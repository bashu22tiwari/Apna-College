// In this we have to remove the consecutive characters of the string

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s="abccdeefff";
    char ans[100];
    ans[0]=s[0];
    int count=1;

    for(int i=1 ; i<s.size() ; i++)
    {
        if(s[i]!=s[i+1])
        {
            ans[count]=s[i];
            count++;
        }
    }

    cout << ans ;
}