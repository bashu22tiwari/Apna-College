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

int main()
{
    Node *h1 = takeInput();
    Node *h2 = takeInput();
    
    Node *head = mergeLists(h1,h2);

    print(head);
}