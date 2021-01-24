// In this i am going to write a function which will give the sum of two numbers

#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int sum;
    sum=a+b;
    cout << sum;    
}

int main()
{
    int a,b;
    cout << "Enter two Numbers\n" ;
    cin >> a >> b ;
    sum(a,b);


}