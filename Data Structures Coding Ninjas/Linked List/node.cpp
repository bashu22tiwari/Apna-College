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

    this -> data = data;
    next = NULL;
}
};

int main()
{
    // Node n1(10);
    // Node n2(20);
    // Node n3(30);

    // cout << n1.data << " "  << n2.data << " " << n3.data << " " << n1.next << " " << n2.next << " " << n3.next;

// Statically

Node n1(1);
Node *head1 = &n1;

Node n2(2);
n1.next = &n2 ;

cout << n1.data << " " << n2.data << endl;

// Dynamically

Node *n3 = new Node(10);
Node **head2 = &n3;
Node *n4 = new Node(20);

n3->next = &*n4;

}