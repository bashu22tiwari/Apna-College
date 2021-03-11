#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

class Student {
public:
    int rollNumber;
    int age;

};

int main()
{
    // Create Object Statically
    Student s1;
    Student s2;

    Student s3,s4,s5;

    s1.age=20;
    s1.rollNumber=1011;
    s2.age=30;
    s2.rollNumber=2212;

    cout << s1.age << " " << s1.rollNumber << endl;
    cout << s2.age << " " << s2.rollNumber <<  endl;


    // Create Object Dynamically

    Student *s6 = new Student ;

    // (*s6).age = 200;
    // (*s6).rollNumber = 34567;

    s6 -> age = 200;
    s6 -> rollNumber = 34567;

    cout << (*s6 ).age << " " << (*s6).rollNumber <<  endl;




}