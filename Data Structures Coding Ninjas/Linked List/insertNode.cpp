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

void print(Node *head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

}

Node *insertNode(Node *head, int data)
{
Node *newNode = new Node(data) ;
Node *temp = head ;
if(position == 0)
{
    newNode->next = temp;
    return newNode;
}
else{
int i=0;
while(i<=(position-2) && temp!=NULL)
{
    temp = temp->next;
    i++;
}
if(temp !=NULL){
newNode->next = temp->next;
temp->next = newNode;
return head;
}
else{
    return head;
}

while(temp->next != NULL)
{
    temp = temp->next;
}
temp->next = newNode;
return head;
}

}

int main()
{
    Node *head = takeInput();
    head = insertNode(head ,100 );
    print(head);
}