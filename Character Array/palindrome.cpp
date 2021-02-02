// In this we will see whether a string is palindrome is string or not

#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin >> n;
    char array[n+1];
    cin >> array ;
    int flag=0;
    for(int j=0; j<n ; j++)
    {
        if(array[j]!=array[n-1-j])
        {
            flag=1;
            break;
        }
    }

    if(flag==1){
        cout << "Not Palnidrome\n";
    }
    else
    {
        cout << "Palindrome\n" ;
    }
}