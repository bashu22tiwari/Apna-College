// In this i am going to sove the nCr using factorial finction

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
    int n,r,ans;
    cout << "Enter n and r\n" ;
    cin >> n >> r ;

    ans = fact(n) / (fact(r)*fact(n-r)) ;
    cout << ans ;
}