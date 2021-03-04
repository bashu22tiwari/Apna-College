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

    Student(string name, int age, int gender)
    {
        this->name=name;
        this->age=age;
        this->gender=gender;
    }

    void display()
    {
        cout << name << " " << age << " " << gender << endl;

    }
};

int main()
{
    Student a = Student("Bashu" , 20, 1);
    Student b = Student("ABhay" , 15 ,0);
    a.display();
    b.display();
}