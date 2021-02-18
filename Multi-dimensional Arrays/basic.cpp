// In this i will learn the basic of the multidimensional arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int array[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0; j<5 ; j++)
        {
            cin >> array[i][j];
        }
    }
    
    for(int i=0;i<5;i++)
    {
        for(int j=0; j<5 ; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << "\n" ;
    }
}