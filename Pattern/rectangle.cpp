// In this a rectangle is made using stars

#include<iostream>
using namespace std;
int main()
{
    int rows, coloums;
    cout << "Enter the number of rows\n" ;
    cin >> rows ;
    cout << "Enter the number of coloumns\n" ;
    cin >> coloums ;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloums; j++)
        {
            cout << "* ";
        }
        cout << "\n" ;
    }
    
}