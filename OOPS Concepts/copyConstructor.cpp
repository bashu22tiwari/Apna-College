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
    cout << "Constructor 1" << endl;
}

// Parameterized Constructor
Student(int rollNumber)
{
    cout << "Constructor 2" << endl;
    this -> rollNumber = rollNumber ;
}

Student(int age, int rollNumber)
{
    cout << "Constructor 3" << endl;
    this -> age = age ;
    this -> rollNumber = rollNumber ;
}

~Student()
{
    cout << "Destructor Called" << endl;
}


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

    // Student s1(10 , 1001);
    // cout << "s1 : ";
    // s1.display();

    // Student s2(s1);
    // cout << "s2 : ";
    // s2.display();

    // Student s1(10,1001);
    // Student s2(20,2002);

    // Student *s3 = new Student(30,3003);

    // s2=s1;

    // *s3=s1;

    // s1.display();
    //  s2.display();
    //   s3 -> display();

    //   delete s3;

    Student s1;
    Student s2(10);
    Student s3(20,1002);

    Student s4(s3);

    s1=s2;

    Student s5(s4);
    
}