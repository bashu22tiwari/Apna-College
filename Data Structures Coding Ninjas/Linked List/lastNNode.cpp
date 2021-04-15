// Here we will find Nth Node from the last


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

Node(int data)
{
    this->data=data;
    next = NULL;
}
};


Node *takeInput()
{
    int data;
    cin >> data ;
    Node *head = NULL;
    Node *tail = NULL;
    while(data != -1)
    {
        Node *newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}


Node *mergeLists(Node *h1 , Node *h2)
{
    Node *first_Node=NULL;
    Node *last_Node=NULL;

    if(h1->data <= h2->data)
    {
        first_Node=h1;
        last_Node=h1;
        h1=h1->next;
    }
    else
    {
        first_Node=h2;
        last_Node=h2;
        h2=h2->next;
    }

    while(h1!=NULL && h2!=NULL)
    {
        if(h1->data <= h2->data)
        {
            last_Node->next=h1;
            last_Node=last_Node->next;
            h1=h1->next;
        }
        else
        {
            last_Node->next=h2;
            last_Node=last_Node->next;
            h2=h2->next;
        }
    }

    while(h1!=NULL && h2==NULL)
    {
        last_Node->next=h1;
        last_Node=last_Node->next;
        h1=h1->next;
    }
    while(h2!=NULL && h1==NULL)
    {
        last_Node->next=h2;
        last_Node=last_Node->next;
        h2=h2->next;
    }

    return first_Node;

}

void print(Node *head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

}

int NfromLast(Node *head , int n){

    // Node *temp = head ;
    // int count=0;

    // while(temp!=NULL){
    //     count++;
    //     temp = temp->next;
    // }

    // if(n>count){
    //     cout << "Not Return Anything\n";
    //     return -1;
    // }
    // else{
    //     int iteration = count-n;

    //     if(iteration==0){
    //         return head->data;
    //     }
    //     else{
    //         Node *temp = head;
    //         for(int i=1 ; i<=iteration ; i++){
    //             temp = temp->next;
    //         }

    //         return temp->data;
    //     }
    // }

    Node *tail=head;;
    Node *front=head;

    while(n--){
        tail = tail->next;

        if(tail==NULL && n==0){
            return head->data;
        }

        if(tail==NULL && n>0){
            cout << "Not Applicable\n";
            return -1;
        }
    }

    while(tail!=NULL){
        tail = tail->next;
        front = front->next;
    }

    return  front->data;

}

int main()
{
    Node *head = takeInput();

    cout << NfromLast(head , 2) ;

}