#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int setBit(int n, int pos)
{
    return (n | (1<<pos)) ;
}

int main()
{
    cout << setBit(5,1) ;
}