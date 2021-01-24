// Printing factorial using functions

#include<iostream>
using namespace std ;

int fact(int num)
{
    if(num ==1)
    {
        return 1;
    }
    else
    {
        return num*fact(num-1);
    }
}

int main()
{
    int n,Factorial;
    cout << "Enter N\n" ;
    cin >> n ;

    Factorial = fact(n);
    cout << Factorial ;
}