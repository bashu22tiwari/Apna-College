#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

class student
{
    public:
    string name;
    int age;
    bool gender;

    void printInfo()
    {
        cout << name << endl ;
        cout << age << endl ;
        cout << gender << endl ;
    }
};

int main()
{
    // student a;
    // a.name="Bashu";
    // a.age=20;
    // a.gender=1;

    // cout << a.gender ;

    student arr[3];
    for(int i=0 ; i<3 ; i++)
    {
        cin >> arr[i].age ;
        cin >> arr[i].gender ;
        cin >> arr[i].name ;
    }

    for(int i=0 ; i<3 ; i++)
    {
        arr[i].printInfo();
    }



}