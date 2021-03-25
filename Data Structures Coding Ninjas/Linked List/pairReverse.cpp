#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

class Pair extends Node {
 
 public:

    Node *head;
    Node *tail;

};


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

Pair pairReversing(Node *head)
{
    if(head==NULL || head->next==NULL)
    {
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }

    Pair smallAnswer = pairReversing(head->next);

    smallAnswer.tail->next=head;
    head->next=NULL;

    Pair ans;
    ans.head=smallAnswer.head;
    ans.tail=head;

    return ans;
    
}

Node *reverse(Node *head)
{
    return pairReversing(head).head;
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
    
    head = reverse(head);

    print(head);
}