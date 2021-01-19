// In this we will be writing a program where we will be checking whether a given number is armstrong number or not
// For example 0, 1, 153, 370, 371 and 407

#include<iostream>
using namespace std;
int main()
{
    int n,digit,sum,product,a;
    sum = 0 ;
    cout << "Enter any Digits\n" ;
    cin >> n;
    a = n;

    while (a > 0)
    {
        digit = %10;
        product = digit*digit*digit ;
        sum += product ;
        a = a/10;
    }

    if (sum == n)
    {
        cout << n << " is an armstrong number." ;
    }
    else
    {
        cout << n << " is not an armstrong number." ;
    }
}