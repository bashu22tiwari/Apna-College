#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int count(int n)
{
    int count=0;
    while(n)
    {
        n = n & (n-1) ;
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n ;
    cout << count(n) ;
}