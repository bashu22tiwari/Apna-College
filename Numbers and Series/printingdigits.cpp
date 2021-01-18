// In this i am going to print the digits from right to left of  a number

#include<iostream>
using namespace std;
int main()
{
    int n,digit;
    cout << "Enter any Digits\n" ;
    cin >> n;

    while (n > 0)
    {
        digit = n%10;
        cout << digit << "\n" ;
        n = n/10;
    }
    
}