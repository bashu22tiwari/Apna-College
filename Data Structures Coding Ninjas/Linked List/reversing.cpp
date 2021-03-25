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

Node *reversing(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    Node *smallAnswer = reversing(head->next);
    Node *a = smallAnswer;
    while(a->next!=NULL)
    {
        a=a->next;
    }

    a->next=head;
    head->next=NULL;
    return smallAnswer;

    
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
    
    head = reversing(head);

    print(head);
}