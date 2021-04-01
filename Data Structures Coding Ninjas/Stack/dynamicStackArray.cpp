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

stackUsingArray(){
    data = new int[4];
    nextIndex=0;
    capacity=4;
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
        int *newData = new int[2*capacity];
        for(int i=0 ; i<capacity ; i++)
        {
            newData[i]=data[i];
        }

        capacity *= 2;
        delete [] data;
        data=newData; 
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


int main()
{
    stackUsingArray s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    cout << s1.top() << "\n";
    s1.pop();
    cout << s1.size() << "\n";
    cout << s1.isEmpty() << "\n";
    cout << s1.top() << "\n";
    s1.pop();
    cout << s1.top() << "\n";
    s1.pop();
    cout << s1.top() << "\n";
    s1.pop();
    s1.push(20);
    s1.push(30);


}