// In this i am going to make a program where we will be converting decimal number into binary number

#include<iostream>
using namespace std ;

 int pow(int a,int b)
 {
     int ans=1;
     if (b == 0)
     {
         return ans;
     }
     else if (b > 0){
     for(int j=1; j<=b ; j++)
     {
         ans*=a;
     }
     return ans;
     }
 }

int main()
{
    int n,rem,i,ans=0;
    cout << "Enter Decimal Number\n" ;
    cin >> n;
    i=0;

    while (n!=0)
    {
        rem = n%8;
        ans += rem*pow(10,i);
        n=n/8;
        i++;
    }
    cout << ans ;
}