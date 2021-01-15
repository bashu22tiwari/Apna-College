// To not print the numbers coming in between 0-100 which are divisible by 3

#include<iostream>
using namespace std;
int main(){
    int n=100;
    for (int i = 0; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }

        cout << i << "\n";
        
    }
    
}