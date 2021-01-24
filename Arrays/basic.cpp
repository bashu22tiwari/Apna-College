// In this i will be learning about the basics of arrays

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array\n";
    cin >> n;
    int array[n];
    
    for(int i=0 ; i<n ; i++)
    {
        cin >> array[i] ;
    }
    for(int i=0 ; i<n ; i++)
    {
        cout << array[i] << " ";
    }
  
}