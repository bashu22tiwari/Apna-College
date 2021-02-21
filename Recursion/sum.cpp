// In this we will be finding the sum of numbers till n

#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n+sum(n-1) ;
    }
}


int main()
{
    int n;
    cin >> n ;
    cout << sum(n);
}