// In this we will print a rhombus

#include<iostream>
using namespace std;
int main()
{
    int n =5;
    cout << "Enter N\n" ;
    cin >> n ;

    for (int i=1; i <= n ; i++)
    {
        for (int j=1 ; j <= n-i ; j++)
        {
            cout << "  ";
        }
        for (int j =1 ; j <= n; j++)
        {
            cout << "* " ;
        }
        cout << "\n" ;
    }
    
}