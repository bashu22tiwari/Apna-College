#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

class Student{

public:

int rollNumber;
int age;

static int totalStudents;

Student()
{
    totalStudents += 1;
}
};

int Student :: totalStudents = 0 ;

int main()


{
    Student s1;
    Student s2;
    Student s3;
    Student s4;

    Student s5;
    Student s6;

    Student s7;
    Student s8;

    cout << Student :: totalStudents << endl;
    
    
}