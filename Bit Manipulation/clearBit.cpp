#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int clearBit(int n, int pos)
{
    return (n & (~(1<<pos))) ;
}
int main()
{
    cout << clearBit(5,2);
}