// Printing The SUm of All the numbers till N

#include<iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "ENter a Number\n" ;
    cin >> n ;

    int sum = 0;
    for ( i = 0; i < n; i++)
    {
        sum += i ;
    }

    cout << "The sum of numbers is " << sum ;

    
}