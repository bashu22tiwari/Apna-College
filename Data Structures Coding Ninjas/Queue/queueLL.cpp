#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

class Node{
public:

    int data;
    Node *next;

    Node(int element){
        data = element ;
        next = NULL ;
    }
};

class QueueLL{
Node *front;
Node *rear;

public:

    QueueLL(){
        front = NULL;
        rear = NULL;
    }

    void enqueue(int element)
    {
        Node *newNode = new Node(element);

        if(front == NULL){
            front=newNode;
            rear=newNode;
        }
        else{
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue(){
        if(front==NULL){
            cout << "Queue is Empty\n";
            return -1;
        }
        else{
            int temp = front->data;
            front = front->next;
            return temp;
        }
    }

    int peek(){
        if(front==NULL){
           cout << "Queue is Empty\n";
            return -1; 
        }
        else{
            return rear->data;
        }
    }

    void Display(){
        Node *temp;
        temp=front;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;

        }
        cout << "\n";
    }
};

int main(){
    QueueLL q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.Display();
    q1.dequeue();
    cout << q1.dequeue() << endl ;
    cout << q1.peek() << endl;
    q1.Display();
    q1.dequeue();
    cout << q1.peek() << endl;
    cout << q1.dequeue() << endl;
}