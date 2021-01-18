// In this we are taking input from the user and checking whether the following number is prime or not

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number\n";
    cin >> number ;
    int flag = 1 ;

    for(int i=2 ; i <= number/2 ; i++ )
    {
        if ( number%2 ==0)
        {
            flag = 0;
            break;
        }
        
    }

    if (flag)
    {
        cout << number << " is a prime number" ;
    }
    else
    {
        cout << number << " is not a prime number" ;
    }
    
}