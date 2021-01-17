// In this a hollow rectangle is made using stars

#include<iostream>
using namespace std;
int main()
{
    int rows, coloums;
    cout << "Enter the number of rows\n" ;
    cin >> rows ;
    cout << "Enter the number of coloumns\n" ;
    cin >> coloums ;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= coloums; j++)
        {
            if ((i == 1) || (i == rows) || (j == 1) || (j == coloums))
            {
                cout << "* " ;
            }
            else
            {
                cout << "  " ;
            }
            
            
        }
        cout << "\n" ;
    }
    
}