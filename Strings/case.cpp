// In this we will be converting a string into fully lowercase or uppercase

// For lower Case
    // for(int i=0 ; i < s.size() ; i++)
    // {
    //     if(s[i] >= 'A' && s[i] <= 'Z')
    //     {
    //         s[i] += 32 ;
    //     }
    // }


    // For upper Case
    // for(int i=0 ; i < s.size() ; i++)
    // {
    //     if(s[i] >= 'a' && s[i] <= 'z')
    //     {
    //         s[i] -= 32 ;
    //     }
    // }

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s ;
    
    transform(s.begin() , s.end() , s.begin() , ::tolower);
    cout << s << "\n";

    transform(s.begin() , s.end() , s.begin() , ::toupper);
    cout << s ;
}