// In this we will be printing the array in the spiral order.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m ;
    cin >> n >> m ;
    int array[n][m] ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0; j<m ; j++)
        {
            cin >> array[i][j] ;
        }
    }
    int rs=0;
    int re=n-1;
    int cs=0;
    int ce=m-1;
    while(rs<= re  && cs <=ce)
    {
        for(int i=cs ; i<=ce ; i++)
        {
            cout << array[rs][i] << " " ;
        }
        rs++;
         for(int i=rs ; i<=re ; i++)
        {
            cout << array[i][ce] << " " ;
        }
        ce--;
         for(int i=ce ; i>=cs ; i--)
        {
            cout << array[re][i] << " " ;
        }
        re--;
         for(int i=re ; i>=rs ; i--)
        {
            cout << array[i][cs] << " " ;
        }
        cs++;
    }
    

}