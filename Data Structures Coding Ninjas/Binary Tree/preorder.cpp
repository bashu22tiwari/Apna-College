#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int key;
    Node *left;
    Node *right;

    Node(int k){
        key=k;
        left=right=NULL;
    }
};

void preorder(Node *root){
    Node *temp = root ;
    if(temp!=NULL){
        cout << temp->key << " ";
        preorder(temp->left);
        preorder(temp->right);
    }
}

int main(){

    Node *root = new Node(30);
    root->left = new Node(40);
    root->right = new Node(50);
    root->left->left = new Node(70);
    root->right->left = new Node(60);
    root->right->right = new Node(80);

    preorder(root);
}

