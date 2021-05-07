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

Node *findSucc(Node *root){
    Node *temp = root;
    temp = temp->right;
    while(temp!=NULL && temp->left!=NULL){
        temp = temp->left;
    }
    return temp;
}

Node *deleteNode(Node *root , int x){
    if(root==NULL){
        return root;
    }

    if(root->key>x){
        root->left = deleteNode(root->left , x);
    }
    else if(root->key<x){
        root->right = deleteNode(root->right , x);
    }
    else if(root->key==x){
        if(root->left==NULL){
            Node *temp = root->right;
            delete root;
            return temp;
        }
        if(root->right==NULL){
            Node *temp = root->left;
            delete root;
            return temp;
        }
        if(root->right!=NULL && root->left!=NULL){
            Node *succ = findSucc(root);
            root->key = succ->key;
            root->right = deleteNode(root->right , succ->key);
        }
    }

    return root;
}

int main(){
    Node *root = new Node(50);
    root->left = new Node(30);
    root->right = new Node(70);

    root->left->left = new Node(20);
    root->left->right = new Node(40);

    root->right->left = new Node(60);
    root->right->right = new Node(80);

    root = deleteNode(root , 80);
    cout << root->right->right->key ;
}