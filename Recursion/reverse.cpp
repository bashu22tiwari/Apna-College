#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

void reverse(string s)
{
    if(s.size()==0)
    {
        return;
    }

    reverse(s.substr(1));
    cout << s[0] ;
}

int main()
{
    string s;
    cin >> s ;
    reverse(s) ;
    return 0;
}