// In this we will be converting a string into fully lowercase or uppercase

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s="AHBASKJBNFLSAEOI" ;
    for(int i=0 ; i < s.size() ; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32 ;
        }
    }

    cout << s << endl;
}