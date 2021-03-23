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

Node *recursiveDeleting(Node *head , int position)
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL && position!=0)
    {
        return head;
    }
    if(position==0)
    {

        Node *res = head->next;
        delete(head);
        return res; 
    }

    Node *x = recursiveDeleting(head->next,position-1);

    head->next=x;
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
    int position;
    cin >> position ;
    head = recursiveDeleting(head , position);
    print(head);
}