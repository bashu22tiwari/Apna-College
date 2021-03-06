#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

class A
{
    public:
    void Afunc()
    {
        cout << "Inherited A\n" ;
    }
};

class B : public A
{
    public:
    void Bfunc()
    {
        cout << "Inherited B\n" ;
    }

};

class C : public B
{
     public:
    // void Cfunc()
    // {
    //     cout << "Inherited C\n" ;
    // }
};



int main()
{
    C c;
    // b.Afunc() ;
    // b.Cfunc();
    c.Afunc() ;
    c.Bfunc() ;
}