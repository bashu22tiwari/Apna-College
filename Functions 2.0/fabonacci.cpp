// In this i will be writing a program about using functions to print fabonacci 

#include<iostream>
using namespace std;

void fab(int num)
{
    int a=0;
    int b=1;
    int c;

    for(int i=1 ; i <= num; i++)
    {
        cout << a << " " ;
        c = a+b ;
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    cout << "Enter N\n" ;
    cin >> n;

    fab(n);

}