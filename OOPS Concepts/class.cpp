#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

class Student {
public:
    int rollNumber;
private:
    int age;

public:
void display()
{
    cout << age << " " << rollNumber << endl;
}

int getAge()
{
    return age;
}

void setAge(int a)
{
    age=a;
}

int getrollNumber()
{
    return rollNumber;
}

void setrollNumber(int b)
{
    rollNumber=b;
}

};

int main()
{
    // Create Object Statically
    Student s1;
    Student s2;

    s1.setAge(20);
    s1.display();

    cout << s1.getAge() << endl ; 



    // Create Object Dynamically
    Student *s6 = new Student ;

    s6 -> setAge(40) ;
    s6 -> display() ;
   
}