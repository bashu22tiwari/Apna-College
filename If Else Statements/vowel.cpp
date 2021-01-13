// Program to find whether a alphabet is vowel or constant

#include<iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter the Alphabet\n" ;
    cin >> c ;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << c << " is a Vowel" ;
    }
    else
    {
        cout << c << " is a Constant" ;
    }
    
    
}