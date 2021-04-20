#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class Node{

    public:

    int data;
    Node *next;
    Node *prev;

    Node(int data){

        this->data=data;
        next=NULL;
        prev=NULL;
    }

};

Node *insertAtBegin(Node *head , int element){

    Node *newNode = new Node(element);

    if(head==NULL){
        head=newNode;
        return head;
    }

    newNode->next = head;
    head->prev = newNode;

    head=newNode;

    return head;
}

Node *insertAtEnd(Node *head, int element){

    Node *newNode = new Node(element);
    if(head==NULL){
        return newNode;
    }

    Node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

Node *reverseList(Node *head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    Node *smallAnswer = reverseList(head->next);

    Node *tail = head->next;
    tail->next = head;
    head->prev=tail;
    head->next = NULL;


    return smallAnswer;
}

void printList(Node *head){
    Node *temp = head;

    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

int main(){

    Node *h1 = new Node(10);
    Node *h2 = new Node(20);
    Node *h3  = new Node(30);

    h1->next = h2;
    h2->next = h3;
    h2->prev = h1;
    h3->prev = h2;

    cout << h1->next->next->data << endl ;
    cout << h3->prev->prev->data << endl ;

    printList(h1);

    h1 = insertAtBegin(h1 , 40);

    printList(h1);

    h1 = insertAtEnd(h1 , 50);

    printList(h1);

    h1 = reverseList(h1);

    printList(h1);
}