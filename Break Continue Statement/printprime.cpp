// To print all the numbers between a and b

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter both the Numbers\n";
    cin >> a >> b;
    for (int n = a; n <= b ; n++)
    {
        for (int i = 2; i <= n ; i++)
     {
        if (n % i == 0)
        {
            break;
        }
        cout << n << "\n";
        break;
     }
        
    }
    
}