// In this i have tried to make a butterfly 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N\n";
    cin >> n ;

    for (int i = 1; i <=n ; i++)
    {
        for (int j =1 ; j <= (2 * n) ; j++)
        {
            if ( j-i <= 0 || i+j >=(2*n+1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  " ;
            }
        }
        cout << "\n" ;
    }

    for (int i = n+1; i <=(2 * n) ; i++)
    {
        for (int j =1 ; j <= (2 * n); j++)
        {
            if ( j-i >= 0 || i+j <=(2*n+1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  " ;
            }
        }
        cout << "\n" ;
    }
    
}