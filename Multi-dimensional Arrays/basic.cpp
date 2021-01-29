// In this i will learn the basic of the multidimensional arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout << "Enter the rows and coloumn\n" ;
    cin >> n >> m ;
    int array[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m ; j++)
        {
            cin >> array[i][j];
        }
    }
    cout << "Matrix is:\n" ;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m ; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n" ;
    }
}