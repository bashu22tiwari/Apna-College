#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int a , b ;
    cin >> a >> b ;
    int a1=0 , b1=0 , c1=0 ;
    for(int i=1 ; i<=n ; i++)
    {
        if(i%a==0)
        {
            a1++;
        }
        if(i%b==0)
        {
            b1++;
        }
        if(i%(a*b)==0)
        {
            c1++;
        }
    }

    cout << a1+b1-c1 ;
}