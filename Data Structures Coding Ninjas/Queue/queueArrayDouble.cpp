#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
using namespace std;

class QueueUsingSinglePointer{
    int *data;
    int rear;
    int size;
    int front;

    public:

    QueueUsingSinglePointer(int size){
        data = new int[size];
        rear=-1;
        front=-1;
        this->size=size;
    }

    void enqueue(int element){
        if(rear==size-1){
            cout << "Queue is Full\n";
            return;
        }
        else{
            data[rear+1]=element;
            rear++;
        }
    }

    int dequeue(){
        if(rear==front){
            cout << "Queue is Empty\n";
            return -1;
        }
        else
        {
            int temp = data[front+1];
            front++;
            return temp;
        }
    }

    int frontValue(){
        if(rear==-front){
            cout << "Queue is Empty\n";
            return -1;
        }
        else
        {
            return data[rear];
        }
    }

    void display(){
        if(rear==front){
            cout << "Queue is Empty\n";
        }
        else{
        for(int i=front+1 ; i<=rear ; i++){
            cout << data[i] << " " ;
        }
        cout << "\n";
        }
    }


};

int main(){

    QueueUsingSinglePointer q1(5);

    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.enqueue(60);
    q1.enqueue(70);
    q1.display();
    cout << q1.frontValue() << endl;
    cout << q1.dequeue() << endl;
    q1.dequeue();
    q1.display();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.display();
}