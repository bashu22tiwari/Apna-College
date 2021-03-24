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

void printingNode(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;

    while(1)
    {

        if(fast==NULL)
        {
            cout << slow->data;
            break;
        }
        if(fast->next==NULL)
        {
            cout << slow->data;
            break;
        }
        
        slow = slow->next;
        fast = fast->next->next;

        
    }

    
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
    
    // print(head);
    printingNode(head);
}