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
Node *head = &n1;

Node n2(2);
n1.next = &n2 ;

cout << n1.data << " " << n2.data << endl;
// cout << n1.next << " " << n2.next << endl;
// cout << n1.next << endl ;
cout << (n1.next)->data << endl;
cout << head->data << endl;

}