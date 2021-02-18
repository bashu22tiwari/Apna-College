#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int getBit(int n, int pos)
{
    return ((n>>pos) & 1) ;
}

int main()
{
    cout << getBit(5,2) ;
}