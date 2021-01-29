// In this we will write aprogram to search any element in the multidimensional array

#include <bits/stdc++.h>
using namespace std;

    int main()
    {
        int n,m;
        int flag=0;
        cout << "Enter the rows and coloumn\n" ;
        cin >> n >> m ;
        int x;
        cout << "Enter the number to be found\n";
        cin >> x ;
        int array[n][m];
        cout << "Enter the elements of array\n" ;
        for(int i=0;i<n;i++)
        {
            for(int j=0; j<m ; j++)
            {
                cin >> array[i][j];
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0; j<m ; j++)
            {
                if(array[i][j]==x)
                {
                    cout << "Number is found\n";
                    cout << "Row is: " << i+1 << "\n";
                    cout << "Coloumn is " << j+1 << "\n";
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout << "Number is not found\n" ;
        }

    }
