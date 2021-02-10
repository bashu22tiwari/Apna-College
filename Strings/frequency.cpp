// In this we will write a program to find the maximum frquency in a string

#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "abcabcaabcabc";
    int array[26] ;
    
    for(int i=0 ; i<26 ; i++)
    {
        array[i]=0;
    }

    for(int i=0 ; i<s.size() ; i++)
    {
        array[s[i] - 'a']++;
    }

    char c;
    int maxNo=0;

    for(int i=0 ; i<26 ; i++)
    {
        if(array[i] > maxNo)
        {
            maxNo = array[i];
            c = i+'a';
        }
    }

    cout << "Character " << c << " has the maximum frequency with number " << maxNo << endl;

    
}