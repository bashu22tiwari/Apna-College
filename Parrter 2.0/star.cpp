// I this i am going to print a star

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;

    for (int i = 1; i <= n ; i++)
    {
        for(int j=1; j<= 2*n-1 ; j ++)
            if ( i+j >= n+1 && j-i <= n-1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            cout << "\n";
    }

    for (int i = n; i >=1 ; i--)
    {
        for(int j=1; j<= 2*n-1 ; j ++)
            if ( i+j >= n+1 && j-i <= n-1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            cout << "\n";
    }
    
}