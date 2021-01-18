// Program to Check whether a triangle is Eqilateral, scalene or isosceles

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter the sides of the triangle\n";
    cin >> a >> b >> c ;

    if (a == b && a == c && b == c)
    {
        cout << "Traingle is Equilateral" ;
    }
    else if ((a == b && b != c && a != c) || (a != b && a == c && c != b) || (c == b && c != a && b != a))
    {
        cout << "Triangle is Isosceles" ;
    }
    else if (a != b && a != c && b != c)
    {
       cout << "Triangle is Scalene" ;
    }
    else
    {
        cout << "No triangle can be formed" ;
    }
    
}