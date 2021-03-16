#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int ans;
    
    while(t--)
    {
        unsigned long long int p,a,b,c;
        cin >> p >> a >> b >> c ;
        unsigned long long int a1,b1,c1;

        if(a>=p)
        {
            a1=a-p;
        }
        else
        {
            a1= a - p%a;
        }
        if(b>=p)
        {
            b1= b-p;
        }
        else
        {
            b1= b - p%b;
        }
        if(c>=p)
        {
            c1=c-p;
        }
        else
        {
            c1= c - p%c;
        }

    if(a==1 || b==1 || c==1)
    {
        cout << "0\n";
    }
    else if(a1<=b1 && a1<=c1)
    {
        cout << a1 << "\n" ;
    }
    else if(b1<=a1 && b1<=c1)
    {
        cout << b1 << "\n" ;
    } 
    else if(c1<=b1 && c1<=a1)
    {
        cout << c1 << "\n" ;
    }
    }

    
}