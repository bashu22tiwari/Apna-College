#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter Three Number";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "Largest is : " << a ;
    }
    else if (b > a && b > c)
    {
        cout << "Largest is : " << b ;
    }

    else if (c> b && c > a)
    {
        cout << "Largest is : " << c ;
    }
}