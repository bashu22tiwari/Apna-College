// In this i have made a pryamid using numbers

#include<iostream>
using namespace std;
int main()
{
    int n;
    int a=0;
    cout << "Enter N\n" ;
    cin >> n ;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                ++a;
                cout << a <<" " ;
            }
            else
            {
                cout << "  " ;
            }
        }
        cout <<"\n";
        
    }
    
}