// Finding the sum of first natural number

#include<iostream>
using namespace std ;

int sumNatural(int num)
{
    int sum=0;
    for(int i=1 ; i <= num ; i++)
    {
        sum += i ;
    }

    return sum;
}

int main()
{
    int n,sum;
    cout << "Enter N\n" ;
    cin >> n ;
    
    sum = sumNatural(n);
    cout << sum << "\n" ;

}