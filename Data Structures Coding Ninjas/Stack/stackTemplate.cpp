#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

template <typename T>
class stackUsingArray{

T *data;
int nextIndex;
int capacity;

public:

stackUsingArray(){
    data = new T[4];
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
void push(T element){
    if(nextIndex==capacity){
        T *newData = new T[2*capacity];
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
T pop(){
    if(isEmpty())
    {
        cout << "Stack is Empty\n";
        return 0;
    }
    nextIndex--;
    return data[nextIndex];
}

// To see the top element
T top()
{
    if(isEmpty())
    {
        cout << "Stack is Empty\n";
        return 0;
    }

    return data[nextIndex-1];
}

};


int main()
{
    stackUsingArray<char> s1;
    s1.push(101);
    s1.push(100);
    s1.push(103);
    s1.push(104);
    s1.push(105);
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