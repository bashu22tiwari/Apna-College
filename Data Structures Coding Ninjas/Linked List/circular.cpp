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
    
    if(tail==NULL){
        return head;
    }
    else{
    tail->next = head ;

    return head;
    }
}

void CircularLLTraversal(Node *head){

    Node *temp = head;

    if(temp==NULL){
        cout << "Empty\n" ;
        return;

    }

    cout << temp->data << " " ;
    temp = temp->next;

    while(temp!=head){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n" ;

}


int main(){
    Node *n1 = takeInput();
    
    CircularLLTraversal(n1);

}