// In this we will be going to design a palindromic pattern

#include<iostream>
using namespace std;
int main()
{
    int n ; 
    cout << "Enter N\n";
    cin >> n ;
    int k;
    for (int i=1 ; i <= n ; i++)
    {
        k = i ;
        for (int j=1 ; j <= (2*n-1) ; j++)
        {
            if ( i+j >= n+1 && j-i <= n-1){
                cout << k << " ";
                j < n ? k-- : k++ ;
            }
            else
            {
                cout << "  ";
            }
        }
        
        cout << "\n";
    }
    
}