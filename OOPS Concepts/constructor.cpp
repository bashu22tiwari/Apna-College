#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

class Student
{
    public:

    string name;
    int age;
    int gender;

    Student()
    {
        cout << "This is a default constructor" << endl ;

    }

    ~Student()
    {
        cout << "Destructor Invoked" << endl ;
    }

    Student(string s, int a, int g)
    {
        cout << "This is a parameterized Constructor" << endl;

        name=s;
        age=a;
        gender=g;
    }

    Student(string s)
    {
        cout << "This onlt takes name" << endl;
        name=s;
    }

};

int main()
{
    Student a;
    Student b("Bashu",20,1);
    Student d ;
    Student c("Abhay") ;
}