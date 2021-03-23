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

Node *recursiveInsert(Node *head , int data , int position)
{
    if(head==NULL)
    {
        return head;
    }
    if(head->next==NULL && position==1)
    {
        Node *newNode = new Node(data);
        head->next = newNode;
        return head;
    }

    if(position==0)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        return newNode;
    }

    Node *x = recursiveInsert(head->next,data,position-1);

    head->next = x;
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
    int data, position;
    cin >> data >> position ;
    head = recursiveInsert(head,data,position);
    print(head);
}