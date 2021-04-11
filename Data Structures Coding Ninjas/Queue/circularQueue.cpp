#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class CircularQueue{
    int *data;
    int rear;
    int size;
    int front;

    public:

    CircularQueue(int size){
        data = new int[size];
        rear=0;
        front=0;
        this->size=size;
    }

    void enqueue(int element){
        if((rear+1)%size == front){
            cout << "Queue is Full\n";
        }
        else{
            rear = (rear+1)%size;
            data[rear]=element;
        }
    }

    int dequeue(){
        if(rear==front){
            cout << "Queue is Empty\n";
            return -1;
        }
        else
        {
            front = (front+1)%size ;
            int temp = data[front];
            return temp;
        }
    }

    int frontValue(){
        if(rear==front){
            cout << "Queue is Empty\n";
            return -1;
        }
        else
        {
            return data[(front+1)%size];
        }
    }

    void display(){
        if(rear==front){
            cout << "Queue is Empty\n";
        }
        else{
            int j=rear;
            int i=front;
            while(i!=j){

                i = (i+1)%size;
                cout << data[i] << " ";

            }
        
        cout << "\n";
        }
    }


};

int main(){
    CircularQueue q(7);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);

    q.display();

    q.enqueue(100);

    cout << q.frontValue() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.dequeue();
    q.dequeue();





}