// In this we will be finding whether the three given sides of any triangle
// resembles pythagoras or not

#include<iostream>
using namespace std ;

bool pythagoras(int x,int y,int z)
{
    if (((z*z) == (x*x) + (y*y)) || ((y*y) == (x*x) + (z*z)) || ((x*x) == (z*z) + (y*y)))
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int a,b,c;
    cout <<"Enter the three sides\n" ;
    cin >> a >> b >> c;

    cout << pythagoras(a,b,c) << "\n";
}