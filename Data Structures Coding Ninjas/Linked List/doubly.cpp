#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

class Node{

    int data;
    Node *next;
    Node *prev;

    Node(int data){

        this->data=data;
        next=NULL;
        prev=NULL;
    }

};

int main(){

    Node *h1 = new Node(10);
    Node *h2 = new Node(20);
    Node *h3  = new Node(30);
}