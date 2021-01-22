// In this i am going to make a program where we will be converting decimal number into octal number

#include<iostream>
using namespace std ;

int main()
{
    int n,rem;
    cout << "Enter Decimal Number\n" ;
    cin >> n;

cout << "1";
    while (n>=2)
    {
        rem = n%8;
        cout << rem ;
        n=n/2;
    }
    
}