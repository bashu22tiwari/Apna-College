#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   string s;
   cin >> s ;

   sort(s.begin() , s.end() , greater<int>()) ;

   cout << s ;
}