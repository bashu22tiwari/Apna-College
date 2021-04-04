#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

template <typename T>

class Node{

public:
    T data;
    Node<T> *next;

    Node(T data){
        this->data = data;
        next=NULL;
    }

};

template <typename T>

class StackUsingLL{

Node<T> *head;
int size;

public:

    StackUsingLL(){
        head=NULL;
        size=0;
    }

    int getSize(){
        return size;
    }

    bool isEmpty(){
        return head==NULL;
    }

    void push(T element){
        Node<T> *newNode = new Node<T>(element);

        if(head==NULL){
            head=newNode;
            size++;
        }
        else{
            newNode->next=head;
            head=newNode;
            size++;
        }


    }

    T pop(){
        if(head==NULL){
            cout << "Stack is Empty" << endl;
            return 0 ;
        }
            T temp = head->data;
            head = head->next;
            size--;
            return temp;
            
    }

    T top(){
        return head->data;
    }
};

int main(){
    StackUsingLL<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    
    cout << s1.getSize() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;

    cout << s1.isEmpty() << endl;
}