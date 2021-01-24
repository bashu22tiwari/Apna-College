// In this i have made a inverted half pryamid

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter N" ;
    cin >> n ;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i+j <= n+1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            
            
        }
        cout <<"\n";
        
    }
    
}