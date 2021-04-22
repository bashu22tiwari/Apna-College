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

Node *rotateList(Node *head, int n){
    Node *temp = head;
    Node *tail = head;
    while(tail->next!=NULL){
        tail=tail->next;
    }

    while(n>1){
        temp = temp->next;
        n--;
    }

    Node *curr = temp->next;
    temp->next=NULL;
    tail->next =head;
    

    return curr;
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
    
    Node *head = rotateList(h1,4);

    print(head);
}