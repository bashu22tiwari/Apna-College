// In this we need to delete the duplicate node


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

void deleteDuplicate(Node *head){

    Node *temp = head;

    while((temp != NULL) && (temp->next != NULL)){

        if((temp->data) == (temp->next->data)){

            temp->next = temp->next->next;
        }
        else{

        temp = temp->next;
        }
    }
}

int main(){
    Node *head = takeInput() ;

    deleteDuplicate(head);

    print(head);

    
}