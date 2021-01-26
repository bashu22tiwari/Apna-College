// Kids With the Greatest Number of Candies (Leetcode)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, extra, max=0;
    cin >> n >> extra ;
    int candies[n] ;
    for(int j=0 ; j<n ; j++)
    {
        cin >> candies[j] ;
    }
    max = candies[0];
    for (int j=1 ; j<n ; j++)
    {
        if(candies[j] > max)
        {
            max=candies[j];
        }
    }
    for(int i=0 ; i<n ; i++)
    {
        if(candies[i] + extra >= max)
        {
            cout << "true "; 
        }
        else
        {
            cout << "flase " ;
        }
    }
    

}