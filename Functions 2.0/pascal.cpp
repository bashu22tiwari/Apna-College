// In this i am going to print a pascal traingle

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

#include<iostream>
using namespace std ;

int fact(int num)
{
    int factorial = 1;
    for(int i=1; i <= num ; i++)
    {
        factorial*= i ;
    }
    return factorial;
}

int main()
{
    int n,ans;
    cout << "Enter N\n" ;
    cin >> n ;

    for (int i=0; i< n ; i++)
    {
        for(int j=0 ; j <= i ; j++)
        {
            cout << fact(i) / (fact(j)*fact(i-j)) <<  " " ;
        }
        cout << "\n" ;
    }
}

