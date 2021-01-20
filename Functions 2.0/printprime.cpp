// In this i will be writing a program where we will be learning about
// printing the various prime numbers between two numbers 

#include<iostream>
using namespace std;

int isPrime(int num)
{
    int flag=1;
    for (int i = 2; i <= num/2; i++)
    {
        if (num%i == 0)
        {
            flag =0 ;
           break; 
        }
        
    }
    if(flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }    
}

int main()
{
   int a,b;
   cout << "Enter The Number\n" ;
   cin >> a >> b ;

   for(int i=a;i<=b;i++)
   {
       if(isPrime(i))
       {
           cout << i << " " ;
       }

   } 
}