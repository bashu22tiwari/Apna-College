#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

class Student {

int age ;

public:
char *name;

public:

Student(int age , char *name)
{
    this -> age = age ;
    this -> name = new char[strlen(name)+1];
    strcpy(this -> name , name);
}

Student(Student const &s)
{
    this -> age = s.age;
    this -> name = new char[strlen(s.name)+1];
    strcpy(this -> name, s.name);
}

void Display()
{
    cout << name << " " << age << endl;
}

};

int main()
{
    char name[] = "abcd";
    Student s1(20 , name);
    s1.Display();

    

    Student s2(s1);

    s2.name[0]='x';

    

    s2.Display();

    s1.Display();
}
