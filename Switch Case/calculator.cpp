// In this i have tried a basic calculator using the switch statements

#include<iostream>
using namespace std;
int main(){
    char button;
    int a,b,operation;
    cout << "Enter the two Numbers\n" ;
    cin >> a >> b ;
    cout << "Enter the operation among +,-,*,/,%\n" ;
    cin >> button ;

    switch (button)
    {
    case '+':
        operation = a+b;
        cout << "The sum of a and b is " << operation;
        break;

    case '-':
        operation = a-b;
        cout << "The subtraction of a and b is " << operation;
        break;

    case '*':
        operation = a*b;
        cout << "The multiplication of a and b is " << operation;
        break;

    case '/':
        operation = a/b;
        cout << "The division of a and b is " << operation;
        break;  

    case '%':
        operation = a%b;
        cout << "The remainder of a and b is " << operation;
        break;  
    
    default:
    cout << "Unidentified Operation";
        break;
    }
}