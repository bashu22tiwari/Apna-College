// In this we will be calculating the factorial of a number

#include<iostream>
using namespace std;
int main()
{
    int n,fact;
    fact = 1 ;
    cout << "Enter any number\n" ;
    cin >> n ;


    for (int i=n ; i >= 1 ; i--)
    {
        fact = fact*i ;
    }

    cout << "The factorial is " << fact ;
    
}