// In this I have tried to learn about the Switch Case

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter The Number\n" ;
    cin >> number;
     switch (number)
     {
     case 1:
         cout << "The number is 1" ; 
         break;
     case 2:
         cout << "The number is 2" ; 
         break; 
     case 3:
         cout << "The number is 3" ; 
         break;
     case 4:
         cout << "The number is 4" ; 
         break;
     case 5:
         cout << "The number is 5" ; 
         break;            
     default:
         cout << "I can not get what you typed" ;
         break;
     }
}