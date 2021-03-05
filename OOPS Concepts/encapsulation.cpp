#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

class Student
{
    public:
    int a;
    void funcA()
    {
        cout << "This is function A" ;
    }

    protected:
    int b;
    void funcB()
    {
        cout << "This is function B" ;
    }

    private:
    int c;
    void funcC()
    {
        cout << "This is function C" ;
    }

};

int main()
{
    Student A;
    A.funcA();
    A.funcB();
    A.funcC();
}