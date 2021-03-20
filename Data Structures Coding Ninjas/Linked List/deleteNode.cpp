#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
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

Node *deleteNode(Node *head)
{
    // if(position==0)
    // {
    //     return head->next;
    //     delete head;
    // }
    // else{
    // int i=0;
    // Node *temp = head ;
    // while(i<=(position-2) && temp!=NULL)
    // {
    //     temp = temp->next;
    //     i++;
    // }
    // if(temp != NULL){
    // Node *a = temp->next;
    // temp->next = a->next;
    // delete a; 
    // return head;
    // }
    // else{
    //     return head;
    // }
    // }
    Node *temp = head;
    Node *a;
    while(temp->next !=NULL)
    {
        a=temp;
        temp = temp->next;
    }

    a->next = NULL ;
    delete temp;
    return head;
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

int main()
{
    Node *head = takeInput();
    head = deleteNode(head);
    print(head);
}