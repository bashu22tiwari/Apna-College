// In this we will be going to print the first N terms of a fabonacci series

#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c;
    cout << "Enter N\n" ;
    cin >> n;

    if(n ==1){
        cout << "0\n" ;
    }
    else if (n == 2)
    {
        cout << "0 1\n" ;
    }
    else if (n > 2)
    {
        cout << "0 1 " ;
        a = 0 ;
        b = 1 ;
        for (int i = 2; i < n; i++)
        {
            c = a + b;
            cout << c << " " ;
            a = b;
            b = c;
        }
        
    }
    
    
}