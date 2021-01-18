// Here we will be printing the table of any number N

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Number\n" ;
    cin >> n ;

    for (int i = 1; i <= 10; i++)
    {
       cout << n << " X " << i << " = " << i * n << "\n";
    }
    
}