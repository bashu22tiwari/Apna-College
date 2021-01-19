// In this i will be writting a program where reverse of any number will be printed

#include<iostream>
using namespace std;
int main()
{
    int n,rem;
    cout << "Enter any number\n" ;
    cin >> n ;

    while(n > 0)
    {
        rem = n%10 ;
        cout << rem ;
        n= n/10;
    }
}
