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

// Default Constructor
Student()
{
    cout << "This is a Default Constructor" << endl;
}

// Parameterized Constructor
Student(int rollNumber)
{
    cout << "Parameterized Constructor Called" << endl;
    this -> rollNumber = rollNumber;
}

// Student(int a, int r)
// {
//     cout << "Both the variables are parameterized" << endl;
//     age=a;
//     rollNumber=r;
// }


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
    // Student s1;
    // s1.display();
    
    // Student s2;

    // s1.setAge(20);
    // s1.setrollNumber(1001);
    
 



    // Create Object Dynamically
    // Student *s6 = new Student ;

    // s6 -> setAge(40) ;
    // s6 -> setrollNumber(2002);
    // s6 -> display() ;

    cout << "Calling parameterized Constructor" << endl;

    Student s4(1001);
    s4.display();

    // Student *s5 = new Student(2002);
    // s5 -> display();

    // cout << "Both the variable are passed" << endl;

    // Student s7(20,3003);
    // s7.display();

    // Student *s8 = new Student(40,4004);
    // s8 -> display();

   
}