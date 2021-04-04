#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

class stackUsingArray{

int *data;
int nextIndex;
int capacity;

public:

stackUsingArray(int sizeOfStack){
    data = new int[sizeOfStack];
    nextIndex=0;
    capacity=sizeOfStack;
}

// To find size of Stack
int size(){
   return nextIndex;
}

// To check if stack is Empty
bool isEmpty(){
    return nextIndex==0;
}

// To Insert any element
void push(int element){
    if(nextIndex==capacity){
        cout << "Stack Full\n";
        return;
    }

    data[nextIndex]=element;
    nextIndex++;
}

// To delete any element
int pop(){
    if(isEmpty())
    {
        cout << "Stack is Empty\n";
        return INT16_MIN;
    }
    nextIndex--;
    return data[nextIndex];
}

// To see the top element
int top()
{
    if(isEmpty())
    {
        cout << "Stack is Empty\n";
        return INT16_MIN;
    }

    return data[nextIndex-1];
}

};