// In this we are going to make a inverted pattern suing the numbers

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n\n" ;
    cin >> n ;
    int a;

    for (int i = 1; i <= n; i++)
    {
        a=0;
        for (int j=1 ; j <= n ; j++)
        {
            if (i+j <= n+1)
            {
                ++a;
                cout << a << " ";
            }
            else
            {
                cout << "  " ;
            }
            
            
        }
        cout << "\n" ;
    }
    
}